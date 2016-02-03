/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 18:34:01 by tfolly            #+#    #+#             */
/*   Updated: 2016/02/03 16:13:18 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <locale.h>

int	main()
{
//	char *str;
	setlocale(LC_ALL, "en_US.UTF-8");

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
//	unsigned long long i;
//	unsigned long long *ptr;
//	
//	ptr = &i;
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


//	wchar_t ltr = 233;
//	printf("taille du wchar : %d\n", (int)sizeof(ltr));
//	unsigned long tete = 20;
//	printf("taille du unsigned long : %d\n", (int)sizeof(tete));

//
//	printf("calcul : %d\n", ft_pow(2,15) + ft_pow(2,14) + 512 + 256 + 128 + 32 + 8 + 1);
//	printf("calcul : %d\n", ft_pow(2,15) + ft_pow(2,14) + ft_pow(2, 7));
//
//	printf("%C\n", L'猫');	
//	ft_printf("%C\n", L'猫');	
//	
//	printf("%C\n", 119070);	
//	ft_printf("%C\n", 119070);	
//
//	printf("%C\n", 63743);	
//	ft_printf("%C\n", 63743);	
//
//	printf("%C\n", 945);	
//	ft_printf("%C\n", 945);	
//
//	printf("%C\n", 2047);	
//	ft_printf("%C\n", 2047);	

	int a;
	int b;
	
	a = printf("   printf : {%S}\n", NULL);
	b = ft_printf("ft_printf : {%S}\n", NULL);
	ft_printf("a : %d, b : %d\n", a, b);

//	a = printf("   printf : %S\n", L"我是一只猫。");
//	b = ft_printf("ft_printf : %S\n", L"我是一只猫。");
//	ft_printf("a : %d, b : %d\n", a, b);




//	b = ft_printf("%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C \
//%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C\
//%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C\n",
//			' ', '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-',
//			'.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';',
//			'<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
//			'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
//			'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e',
//			'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
//			't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}');
//
//
//	a = printf("%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C \
//%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C\
//%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C\n",
//			' ', '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-',
//			'.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';',
//			'<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
//			'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
//			'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e',
//			'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
//			't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}');

	return (0);

}
