/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2023/01/11 16:32:43 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FDF_H
# define FDF_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <fcntl.h>
# include "libft.h"
# include "ft_printf.h"

typedef struct pilha_A
{
	int					item_a;
	struct pilha_A		*next_a;
	struct pilha_A		*prev_a;
} Tpilha_A;

typedef struct parametros
{
	char	*prm;
	char	**av;
	int		ac;
} Tparam;

Tparam	start_param(Tparam	*p);

#endif
