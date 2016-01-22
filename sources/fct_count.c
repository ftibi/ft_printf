/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_count.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:21:43 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/22 19:08:44 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int		ft_puthexa_printf(void *n, t_opt *opt)
{
	char	*tmp;
	int		ret;

	opt = NULL;
	tmp = ft_uitoa_base((unsigned int)n, 16);
	ft_putstr(tmp);
	ret = ft_strlen(tmp);
	ft_memdel((void**)&tmp);
	return (ret);
}

int		ft_putnbr_printf(void *n, t_opt *opt)
{
	int			ret;
	int			nbr;
	char		*tmp;

	opt = NULL;
	nbr = (long int)n;
	tmp = ft_itoa_base((int)n, 10);
	ret = ft_strlen(tmp);
	ft_putstr(tmp);
	ft_memdel((void**)&tmp);
	return (ret);
}

int		ft_putstr_printf(void *str, t_opt *opt)
{
	char *tmp;

	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	opt = NULL;
	tmp = ft_strdup((char*)str);
	ft_putstr(tmp);
	ft_memdel((void**)&tmp);
	return (ft_strlen((char*)str));
}

int		ft_putchar_printf(void *c, t_opt *opt)
{
	opt = NULL;
	ft_putchar((char)c);
	return (1);
}
