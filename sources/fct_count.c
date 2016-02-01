/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_count.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:21:43 by tfolly            #+#    #+#             */
/*   Updated: 2016/02/01 17:23:16 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int		ft_putoct_printf(void *n, t_opt *opt)
{
	char	*tmp;
	int		ret;

	ret = 0;
	opt = NULL;
	tmp = ft_uitoa_base((unsigned long long)n, 8);
	ft_putstr(tmp);
	ret += ft_strlen(tmp);
	ft_memdel((void**)&tmp);
	return (ret);
}

int		ft_puthexa_printf(void *n, t_opt *opt)
{
	char	*tmp;
	int		ret;

	ret = 0;
	if (opt->hash == 1)
	{
		ft_putstr("0x");
		ret += 2;
	}
	opt = NULL;
	tmp = ft_uitoa_base((unsigned long long)n, 16);
	ft_putstr(tmp);
	ret += ft_strlen(tmp);
	ft_memdel((void**)&tmp);
	return (ret);
}

int		ft_puthexamaj_printf(void *n, t_opt *opt)
{
	char	*tmp;
	int		ret;

	ret = 0;
	if (opt->hash == 1)
	{
		ft_putstr("0x");
		ret += 2;
	}
	opt = NULL;
	tmp = ft_uitoa_basemaj((unsigned long long)n, 16);
	ft_putstr(tmp);
	ret += ft_strlen(tmp);
	ft_memdel((void**)&tmp);
	return (ret);
}

int		ft_uputnbr_printf(void *n, t_opt *opt)
{
	int					ret;
	unsigned long long	nbr;
	char				*tmp;

	opt = NULL;
	nbr = (unsigned long long)n;
	tmp = ft_uitoa_base((unsigned long long)n, 10);
	ret = ft_strlen(tmp);
	ft_putstr(tmp);
	ft_memdel((void**)&tmp);
	return (ret);
}

int		ft_lputnbr_printf(void *n, t_opt *opt)
{
	int			ret;
	int			nbr;
	char		*tmp;

	opt = NULL;
	nbr = (long long)n;
	tmp = ft_litoa_base((long long)n, 10);
	ret = ft_strlen(tmp);
	ft_putstr(tmp);
	ft_memdel((void**)&tmp);
	return (ret);
}

int		ft_putnbr_printf(void *n, t_opt *opt)
{
	int			ret;
	int			nbr;
	char		*tmp;

	opt = NULL;
	nbr = (int)n;
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

int		ft_lputchar(void *c, t_opt *opt)
{
	wchar_t		ltr;

	opt = NULL;
	ltr = (wchar_t)c;
	return (1);
}




























