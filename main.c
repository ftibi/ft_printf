/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:34:01 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/22 20:36:26 by tfolly           ###   ########.fr       */
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
//	ft_printf("%x\n", UINT_MAX);
//	printf("%x\n", UINT_MAX);

	//test  p
	int i;
	int *ptr;
	
//	ptr = &i;
	printf("test : %lu\n", ULONG_MAX);
	ft_printf("%p\n", &i);
	printf("%p\n", &i);
	printf("size of the pointeur : %ld\n", sizeof(ptr));
	return (0);

}
