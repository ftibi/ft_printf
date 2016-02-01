/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:34:01 by tfolly            #+#    #+#             */
/*   Updated: 2016/02/01 16:13:36 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main()
{
//	char *str;

//	ft_printf("salut comment %s va? on est en %d et mon nom commence par %c %%\n", "ca", 2016, 'T', "lala");
	//ft_printf("%", 0);	
//	ft_putendl("");
//	ft_printf("%d\n", INT_MIN);	
//	printf("%d\n", INT_MIN);	

	//test hexa
	//int	a = 200;
//	ft_printf("%x\n", UINT_MAX);
//	printf("%x\n", UINT_MAX);

	//test  p
	unsigned long long i;
	unsigned long long *ptr;
	
	ptr = &i;
//	printf("test : %lu\n", INT_MIN);
//	ft_printf("%x\n", 15);
//	ft_printf("%p\n", ptr);
//	printf("%p\n", ptr);
//	printf("size of the pointeur : %ld\n", sizeof(ptr));
//	
//	//tests sur itoa base
//	printf("tests sur uitoa base :\n");
//	i = ULONG_MAX;
//	printf("%llx\n", i);
//	ft_putendl(ft_uitoa_base(i, 16));

	//tests %
//	printf("%");
//	printf("s: %s, p: %p, d:%d\n", "a string", ptr, 42);
//	ft_printf("s: %s, p: %p, d:%d\n", "a string", ptr, 42);


	printf("%X\n", 42);	
	ft_printf("%X\n", 42);	
	
	
	
	return (0);

}
