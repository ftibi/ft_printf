/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:15:06 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/10 14:31:11 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*printflag(char flag,  )
{
}

char		*flagfmt(char flag)
{
}

int			ft_printf(const char *format, ...)
{
	char	*res;
	int		size;
	va_list args;
	t_fmt	*begin_list;
	t_fmt	*list;
	char	*tmp;

	list = fmt_init();
	begin_list = list;
	size = 256;
	if (!(res = ft_memalloc(256)))
		return (-1);
	va_start(args, format);
	while (*format)
	{
		while (*format != '%')
		{
			*res = *format;
			res++;
			format++;
		}
		if (*format == '%')
		{
			format++;
			tmp = list-> 
		}
	}
	va_end(args);
	return (size); //a corriger	
}
