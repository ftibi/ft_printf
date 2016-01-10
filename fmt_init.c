/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 12:52:02 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/10 14:22:10 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//attention je v utiliser typeof


static t_fmt	*fmt_new(t_fmt *list, char flag, void *fct)
{
	t_fmt	*tmp;
	t_fmt	*new;

	if (list)
	{
		while (list->next)
			list = list->next;
		if (!(new = (t_fmt*)ft_memalloc(sizeof(t_fmt))))
			return (NULL);
		list->next = new;
	}
	else
	{
		if (!(new = (t_fmt*)ft_memalloc(sizeof(t_fmt))))
			return (NULL);
	}
	new->flag = flag;
	new->fct = fct;
	new->next = NULL;
	return (new);
}

t_fmt	*fmt_init()
{
	t_fmt	*fmt_list;

	fmt_list = NULL;
	fmt_new(fmt_list, 's', ft_putstr);
	fmt_new(fmt_list, 'd', ft_putnbr);
	fmt_new(fmt_list, 'i', ft_putnbr);
	fmt_new(fmt_list, 'c', ft_putchar);
	//fmt_new(fmt_list, 'x', ft_puthexa);
	return (fmt_list);
}