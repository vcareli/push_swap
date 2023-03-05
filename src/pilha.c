/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pilha.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/02/24 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

Tparam	*start_param(Tparam	*p)
{
	p = (Tparam *)malloc(sizeof(Tparam));
	if (!p)
		exit (1);
	p->ac = NULL;
	p->prm = NULL;
	p->split = NULL;
	p->a = NULL;
	p->b = NULL;
	p->av = 0;
	p->len = 0;
	return (p);
}
