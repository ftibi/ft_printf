/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:15:06 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/12 19:03:07 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(const char *format, ...)
{
	va_list args;
	t_fmt	*begin_list;
	t_fmt	*list;
	int		count;
	t_opt	*opt;

	count = 0;
	list = fmt_init(list);
	begin_list = list;
	va_start(args, format);
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
			if (*format == '%')
			{
				va_arg(args, void*);
				ft_putchar('%');
				count++;
			}
			else
			{
				opt_read(opt, (char**)&format);
				ft_putendl(format);
				list = find_list(begin_list, *format);
				count += (int)list->fct((void*)va_arg(args, void*), opt);
			}
			format++;
		}
	}
	va_end(args);
	return (count);
}

//il va falloir que je passe format en retour des fctions pour eviter les segfaults!
