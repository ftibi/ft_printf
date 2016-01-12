/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 15:47:12 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/11 18:27:22 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdarg.h>

int	ft_putnbr_printf(void *nbr);

int	testfct(int last, ...)
{
	va_list	ap;
	
	va_start(ap, last);
	//ft_putendl((char*)va_arg(ap, void*));	
	ft_putnbr_printf(va_arg(ap, void*));
	va_end(ap);

	return (0);
}


int	main(void)
{
	int a = 10;
	int b = 20;

	testfct(a, b);	

	return (0);
}
