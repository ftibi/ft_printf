/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:15:06 by tfolly            #+#    #+#             */
/*   Updated: 2016/02/03 16:44:59 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(const char *fmt, ...)
{
	va_list args;
	t_fmt	*begin_list;
	t_fmt	*list;
	int		count;
	t_opt	*opt;
	char	*format;

	format = ft_strdup(fmt);
	count = 0;
	list = 0;
	list = fmt_init(list);
	begin_list = list;
	va_start(args, fmt);
	if (!(opt = (t_opt*)ft_memalloc(sizeof(t_opt))))
		return (-1);
	while (*format)
	{
		opt_init(opt);
		while (*format != '%' && *format)
		{
			ft_putchar(*format);
			format++;
			count++;
		}
		if (*format == '%')
		{
			format++;
			if (!*format)
				return (count);
			if (*format == '%')
			{
				ft_putchar('%');
				count++;
			}
			else
			{
				format = opt_read(opt, (char*)format);
			//	ft_putendl(format); //juste pour le debug
			//	print_opt(opt);
				//ici il faut appeler une fct de conv
				if (*format == 'p')
				{
					*format = 'x';
					opt->hash = 1;
				}
				if (!(list = find_list(begin_list, *format)))
				{
					if (*format)
					{
						ft_putchar(*format);
						count++;
					}
				}
				else
					count += (int)list->fct(va_arg(args, void*), opt);
			}
			format++;
		}
	}
	va_end(args);
	return (count);
}
