/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 12:52:02 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/22 20:44:36 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_fmt	*fmt_new(t_fmt *list, char flag, void *fct)
{
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

t_fmt	*find_list(t_fmt *begin, char flag)
{
	t_fmt	*tmp;

	tmp = begin;
	while (tmp)
	{
		if (tmp->flag == flag)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

t_fmt	*fmt_init(t_fmt *fmt_list)
{
	fmt_list = NULL;
	fmt_list = fmt_new(fmt_list, 's', ft_putstr_printf);
	fmt_new(fmt_list, 'd', ft_putnbr_printf);
	fmt_new(fmt_list, 'i', ft_putnbr_printf);
	fmt_new(fmt_list, 'c', ft_putchar_printf);
	fmt_new(fmt_list, 'x', ft_puthexa_printf);
	//fmt_new(fmt_list, 'o', ft_putoct_printf);
	return (fmt_list);
}
