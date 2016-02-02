/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_count.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:21:43 by tfolly            #+#    #+#             */
/*   Updated: 2016/02/02 17:32:11 by tfolly           ###   ########.fr       */
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

//static pour lputchar
static wchar_t	two_oct(unsigned long c)
{
	int		i;
	int		oct1;
	int		oct2;

	oct1 = ft_pow(2, 7) + ft_pow(2, 6);
	i = 10;
	while (i >= 6)
	{
		if (c / ft_pow(2, i))
		{
			oct1 += ft_pow(2, i - 6);
			c -= ft_pow(2, i);
		}
		i--;
	}
	oct2 = ft_pow(2, 7);
	while (i >= 0)
	{
		if (c / ft_pow(2, i))
		{
			oct2 += ft_pow(2, i);
			c = c - ft_pow(2, i);
		}
		i--;
	}
	write(1, &oct1, 1);
	write(1, &oct2, 1);
	return (1);
}

static wchar_t	three_oct(unsigned long c)
{
	wchar_t ltr;

	ltr = c;
	return (ltr);
}

static wchar_t	four_oct(unsigned long c)
{
	wchar_t ltr;
	ltr = c;
	return (ltr);
}

int		ft_lputchar_printf(void *c, t_opt *opt)
{
	unsigned long	tmp;
	
	ft_putendl("appel de lputchar");
	opt = NULL;
	tmp = (unsigned long)c;
	if (tmp < 128) // ltr se code sur 1 a 7 bits 1 oct
		return (ft_putchar_printf(c, opt)); 
	else if (tmp < 2048)// ltr se code sur 8 a 11 bits 2 oct
		return (two_oct((unsigned long)c));
	else if (tmp < ft_ulpow(2, 15) * 2 - 1)// 12 a 16 bits : 3 oct
		return (three_oct((unsigned long)c));
	else if (tmp < ft_ulpow(2, 20) * 2 - 1)// 17 a 21 bits : 4 oct
		return (four_oct((unsigned long)c));
	return (1);
}




























