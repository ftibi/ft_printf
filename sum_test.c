/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:32:06 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/10 11:58:09 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

//attention ca nemarche pas a cause du coportement indetermine de va_arg qd on appelle un elem inexistant
double average(int num, ...) 
{
	va_list	args;
	double sum = 0;
	int i;
	double	tmp;

	va_start(args, num);
	sum = num;
	i = 0;
	while ((long double)(tmp = va_arg(args, double)))
	{
		sum += tmp;
		i++;
		printf("tmp : %f\n", tmp);
	}
	printf("tmp : %f\n", tmp);
	va_end (args);
	return (sum / i);
}

int	main()
{
	printf( "moyenne : 3, 12.2, 22.3, 4.5 = %f\n", average ( 3, 12.2, 22.3, 4.5 ) );
	printf( "moyenne : 5, 3.3, 2.2, 1.1, 5.5, 3.3 = %f\n", average ( 5, 3.3, 2.2, 1.1, 5.5, 3.3 ) );
	return (0);
}
