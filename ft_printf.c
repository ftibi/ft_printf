/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:15:06 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/11 16:57:33 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//char		*printflag(char flag,  )
//{
//}
//
//char		*flagfmt(char flag)
//{
//}

int			ft_printf(const char *format, ...)
{
	int		size;
	va_list args;
	t_fmt	*begin_list;
	t_fmt	*list;
	char	*tmp;
	int		count;

	count = 0;
	list = fmt_init();
	begin_list = list;
	size = 256;
	if (!(res = (char*)ft_memalloc(256)))
		return (-1);
	va_start(args, format);
	while (*format)
	{
		while (*format != '%')
		{
			ft_putchar(*format);
			format++;
			count++;
		}
		if (*format == '%')
		{
			format++;
			list = find_list(begin_list, *format);
			count += list->fct(va_arg(args, void*)); //je vais devoir ecrire une fction pour chaque type de conversion
			format++;   //ou passer args a ma fction !!!!
		}
	}
	va_end(args);
	return (size); //a corriger	
}
