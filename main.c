/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:34:01 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/22 19:00:32 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main()
{
//	char *str;

//	ft_printf("salut comment %+s va? on est en %d et mon nom commence par %c %%\n", "ca", 2016, 'T', "lala");
	//ft_printf("%", 0);	
//	ft_putendl("");
//	ft_printf("%d\n", INT_MIN);	
//	printf("%d\n", INT_MIN);	

	//test hexa
	//int	a = 200;
	ft_printf("%x\n", UINT_MAX);
	printf("%x\n", UINT_MAX);

	return (0);

}
