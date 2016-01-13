/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opt_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 16:27:16 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/13 17:11:36 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_opt	*opt_init(t_opt *opt)
{
	opt->hash = 0;
	opt->zero = 0;
	opt->minus = 0;
	opt->plus = 0;
	opt->space = 0;
	opt->min_width = 0;
	opt->precision = 0;
	opt->size = 0;
	return (opt);
}

static char	*opt_read_size(t_opt *opt, char *format)
{
//	ft_putendl("appel opt_read_size");
	if (*format == 'h' && *(format + 1) == 'h')
		opt->size = 1;
	else if (*format == 'h')
		opt->size = 2;
	else if (*format == 'l')
		opt->size = 4;
	else if (*format == 'l' && *(format + 1) == 'l')
		opt->size = 8;
	else if (*format == 'j') //a voir
		opt->size = 1;
	else if (*format == 'z') // a voir
		opt->size = 1;
//	ft_putendl("sortie opt_read_size");
	return (format);
	
}

char	*opt_read(t_opt *opt, char *format)
{
	char	*opt_str;
	
//	ft_putendl("appel opt_read");
	opt_str = ft_strdup("+-0# ");
	while (ft_strchr(opt_str, *format))
	{
	//	ft_putendl("entree 1er while");
		if (*format == '#')
			opt->hash = 1;
		else if (*format == '0')
			opt->zero = 1;
		else if (*format == '+')
			opt->plus = 1;
		else if (*format == '-')
			opt->minus = 1;
		else if (*format == ' ')
			opt->space = 1;
		format++;
//	ft_putendl("fin 1er while");
	}
//	ft_putendl("sortie 1er while");
	while (ft_isdigit(*format))
	{
		opt->min_width *= 10;
		opt->min_width += *format;
		format++;
	}
	if (*format == '.')
	{
		format++;
		while (ft_isdigit(*format))
		{
			opt->precision *= 10;
			opt->precision += *format;
			format++;
		}
	}
	opt_read_size(opt, format);
	//ft_strdel(&opt_str);
//	ft_putendl("sortie opt_read");
	return (format);
}
