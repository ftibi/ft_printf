/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:14:54 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/11 19:39:47 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);

typedef int	t_fct(void*);
typedef struct			s_fmt
{
	char				flag;
	t_fct				*fct;
	struct s_fmt		*next;
}						t_fmt;

t_fmt	*fmt_init(t_fmt *list);
t_fmt	*find_list(t_fmt *begin, char flag);

int		ft_putstr_printf(void *str);
int		ft_putnbr_printf(void *nb);
int		ft_putchar_printf(void *c);




#endif
