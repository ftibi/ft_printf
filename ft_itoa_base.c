/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 17:59:34 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/21 18:54:51 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//utiliser un unsigned int pour stocker la valeur
//faire une fct qui malloc et renvoie la chaine de char a zero et modif pow 
//faire une fct qui ajoute le '-' au debut si necessaire
//rajouter les lettres abcdef pour les bases sup a 10
//faire une fct qui renvoie le bon char alphanum a mettre dans la chaine


static char *ft_init_itoa(int nb, int base, int *pow)
{
    char *ret;

    *pow = 1;
    while (ft_pow(base, *pow) < nb)
        (*pow)++;
    *pow = ft_pow(base, *pow);
    *pow = (*pow == nb) ? *pow : *pow / base;
    if (!(ret = ft_memalloc(*pow + 2)))
        return (NULL);
    return (ret);
}

static char *ft_signe_itoa(int signe, char *ret)
{
    if (signe == -1)
    {
        *ret = '-';
        ret++;
    }
    return (ret);
}

static char ft_char_itoa(int base, int pow, int nb)
{
    char    ret;

    ret = nb / pow + '0';
    return (ret);
}

char    *ft_itoa_base(int nbr, int base)
{
    char    *ret;
    char    *save;
    int     signe;
    int     pow;
    unsigned int nb;

    signe = (nbr >= 0) ? 1 : -1;
    nb = signe * nbr;
    if (!(ret = ft_init_itoa(nb, base, &pow)))
        return (NULL);
    save = ret;
    ret = ft_signe_itoa(signe, ret);
    while (pow > 0)
    {
        *ret = nb / pow + '0';
        nb = nb % pow;
        pow = pow / base;
        ret++;
    }
    return (save);
}
