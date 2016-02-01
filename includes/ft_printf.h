/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:14:54 by tfolly            #+#    #+#             */
/*   Updated: 2016/02/01 17:06:44 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

typedef struct			s_opt
{
	int					hash;
	int					zero;
	int					minus;
	int					plus;
	int					space;
	int					min_width;
	int					precision;
	int					size;
}						t_opt;

typedef int	t_fct(void*, t_opt *opt);
typedef struct			s_fmt
{
	char				flag;
	t_fct				*fct;
	struct s_fmt		*next;
}						t_fmt;

int		ft_printf(const char *format, ...);

t_opt	*opt_init(t_opt *opt);
char	*opt_read(t_opt *opt, char *format);

t_fmt	*fmt_init(t_fmt *list);
t_fmt	*find_list(t_fmt *begin, char flag);

int		ft_putstr_printf(void *str, t_opt *opt);
int		ft_putnbr_printf(void *nb, t_opt *opt);
int		ft_lputnbr_printf(void *nb, t_opt *opt);
int		ft_putchar_printf(void *c, t_opt *opt);
int		ft_lputchar_printf(void *c, t_opt *opt);
int		ft_puthexa_printf(void *nb, t_opt *opt);
int		ft_puthexamaj_printf(void *nb, t_opt *opt);
int		ft_putoct_printf(void *nb, t_opt *opt);
int		ft_uputnbr_printf(void *nb, t_opt *opt);

//pour le debug a retirer
void	print_opt(t_opt *opt);


#endif
