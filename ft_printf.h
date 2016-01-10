/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:14:54 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/10 13:52:45 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
typedef struct			s_fmt
{
	char				flag;
	char				*fmt;
	void				*fct;
	struct s_fmt		*next;
}						t_fmt;

t_fmt	*fmt_init(void);

#endif
