/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_count.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:21:43 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/19 19:18:41 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int		ft_putnbr_printf(void *n, t_opt *opt)
{
	int			ret;
	int			nbr;
	long int	op;
	long int	op2;

	nbr = (long int)n;
	opt = NULL;
	ret = 0;

	if (nbr == INT_MIN)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
		ret++;
	}
	if (nbr > 10)
	{
		op = nbr / 10;
		op2 = nbr % 10;
		ret += (ft_putnbr_printf((void*)op, opt));
		ret += (ft_putnbr_printf((void*)op2, opt));
	}
	else
	{
		ft_putchar('0' + nbr);
		ret++;
	}
	return (ret);
}

int		ft_putstr_printf(void *str, t_opt *opt)
{
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
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
