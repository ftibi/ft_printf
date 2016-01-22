/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 17:59:34 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/22 14:46:31 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_init_itoa(unsigned int nb, int base, int *pow, int signe)
{
	char	*ret;

	*pow = 1;
	while (nb >= base)
	{
		nb /= base;
		(*pow)++;
	}
	if (!(ret = ft_strnew(*pow + (signe == -1))))
		return (NULL);
	*pow = ft_pow(base, *pow - 1);
	return (ret);
}

static char		*ft_signe_itoa(int signe, char *ret)
{
	if (signe == -1)
	{
		*ret = '-';
		ret++;
	}
	return (ret);
}

static char		ft_char_itoa(int pow, int nb, int base)
{
	char	ret;

	ret = nb / pow;
	if (ret >= 10)
		ret += 'a' - 10;
	else
		ret += '0';
	return (ret);
}

char			*ft_itoa_base(int nbr, int base)
{
	char			*ret;
	char			*save;
	int				signe;
	int				pow;
	unsigned int	nb;

	signe = (nbr >= 0) ? 1 : -1;
	nb = signe * nbr;
	if (!(ret = ft_init_itoa(nb, base, &pow, signe)))
		return (NULL);
	save = ret;
	ret = ft_signe_itoa(signe, ret);
	while (pow > 0)
	{
		*ret = ft_char_itoa(pow, nb, base);
		nb = nb % pow;
		pow = pow / base;
		ret++;
	}
	return (save);
}
