/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_opt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 16:54:25 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/13 17:01:23 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// fction qui sert juste au debug, ne pas rendre

void	print_opt(t_opt *opt)
{
	ft_putendl("");

	ft_putstr("hash : ");
	ft_putnbr(opt->hash);
	ft_putendl("");
	ft_putstr("zero : ");
	ft_putnbr(opt->zero);
	ft_putendl("");
	ft_putstr("minus : ");
	ft_putnbr(opt->minus);
	ft_putendl("");
	ft_putstr("plus : ");
	ft_putnbr(opt->plus);
	ft_putendl("");
	ft_putstr("space : ");
	ft_putnbr(opt->space);
	ft_putendl("");
	ft_putstr("min_width : ");
	ft_putnbr(opt->min_width);
	ft_putendl("");
	ft_putstr("precision : ");
	ft_putnbr(opt->precision);
	ft_putendl("");
	ft_putstr("size : ");
	ft_putnbr(opt->size);
	ft_putendl("");
}
