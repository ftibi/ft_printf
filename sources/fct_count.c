/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_count.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:21:43 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/19 16:35:26 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putnbr_printf(void *nbr, t_opt *opt)
{
	opt = NULL;
	ft_putnbr((int)nbr);
	return (0);
}

int		ft_putstr_printf(void *str, t_opt *opt)
{
	opt = NULL;
	ft_putstr((char*)str);
	return (ft_strlen((char*)str));
}

int		ft_putchar_printf(void *c, t_opt *opt)
{
	opt = NULL;
	ft_putchar((char)c);
	return (1);
}
