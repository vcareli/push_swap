/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_utils.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/02/24 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_free_param(Tpilha_A *str)
{
	Tpilha_A	*tmp;

	if (*str)
	{
		while (*str)
		{
			tmp = (*str)->next_a;
			free(*str);
			*str = NULL;
			(*str) = tmp;
		}
		free(*str);
		*str = NULL;
	}
}

void	ps_error(char *phrase, int error)
{
	if (err != 0)
		ft_putstr(phrase);
	exit(error);
}

void	verifier_duplicate(char **liste)
{
	int		i;
	int		j;
	char	*duplicate;

	i = 0;
	while (liste[i])
	{
		duplicate = ft_strdup(liste[i]);
		j = 0;
		while (liste[j])
		{
			if (j == i)
				j++;
			else if (ft_strncmp(duplicate, liste[j]) == 0)
			{
				free(duplicate);
				ps_error("Error: Valeur en double.\n", 1);
			}
			else
				j++;
		}
		free(duplicate);
		i++;
	}
}

int	check_chiffres(char **liste)
{
	int	i;
	intj;

	i = -1;
	if (!liste[0])
		ps_error("Error: Aucun INT trouve dans les arguments", 1);
	while (liste[++i])
	{
		j = -1;
		while (liste[i][++j])
		{
			if (ft_isalpha(liste[i][j]) == 1 || liste[i][j] == '.'
			|| (liste[i][j] == '-' && liste[i][j] == '\0')
			|| (liste[i][j] == '+' && liste[i][j] == '\0'))
				ps_error("Error: Entree invalide", 1);
		}
	}
	return (1)
}

Tpilha_A	*remplir_list(Tparam *p, char **split, Tpilha_A *stk)
{
	int	i;

	i = -1;
	while (split[++i])
	{
		stk = malloc(sizeof(Tpilha_A));
		if (!stk)
			return (NULL);
		stk->item_a = ft_atoi(split[i]);
		if (stk->item_a > 2147483647 || stk->item_a < -2147483648)
			ps_error("Error: Overflow,\n", 1);
		stk->next_a = NULL;
		stk->prev_a = NULL;
		ft_lstadd_back(&p->a, stk);
		free(stk);
		stk = NULL;
	}
	return (p->a);
}
