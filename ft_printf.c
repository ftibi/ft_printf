/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:15:06 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/11 19:41:09 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(const char *format, ...)
{
	va_list args;
	t_fmt	*begin_list;
	t_fmt	*list;
	char	*tmp;
	int		count;
	void	*var;

	count = 0;
	list = fmt_init(list);
	begin_list = list;
	va_start(args, format);
	while (*format)
	{
		while (*format != '%' && *format)
		{
			ft_putchar(*format);
			format++;
			count++;
		}
		if (*format == '%')
		{
			format++;
			list = find_list(begin_list, *format);
			count += (int)list->fct((void*)va_arg(args, void*));
			format++;
		}
	}
	va_end(args);
	return (count);
}
