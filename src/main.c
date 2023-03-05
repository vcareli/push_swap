/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/02/24 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

char	**remplir_split(Tparam *p, int qtd, char **liste)
{
	if (qtd == 2)
		//p->split = "funcao split";
	else
		p->split = &liste[1];
	return (p->split);
}

void	verify_params(Tparam *p, int qtd, char **liste)
{
	Tpilha_A	*stack;

	stack = NULL;
	p->split = remplir_split(p, qtd, liste);
	verifier_duplicate(v->split);
	check_chiffres(p->split);
	p->a = remplir_list(p, p->split, stack);
	p->len = ft_lstsize(p->a);
	ft_free_param(&stack);
	if (p->len <= 10)
		ft_putstr("peq");
	else
		ft_putstr("grande");
	if (qtd == 2)
		ft_free_param(p->split);
}

void	ft_aide(void)
{
	ft_putstr("Push-Swap: Pour exécuter le programme vous pouvez utiliser:\n");
	ft_putstr("./push_swap <liste d'arguments numériques>\n");
	ft_putstr("Ex: ./push_swap 1 2 3 4\n");
}

int	main(int argc, char **argv)
{
	Tparam	*p;

	p = NULL;
	if (argc <= 2)
	{
		if (!ft_strncmp(argv[1], "-h", 3) || !ft_strncmp(argv[1], "-H", 3))
			ft_aide();
		else
			ps_error("Error. Mauvaise quantité d'arguments.\n", 1);
	}
	else
	{
		p = start_param(p);
		if (!ft_strncmp(argv[1], "-h", 3) || !ft_strncmp(argv[1], "-H", 3))
			ft_aide();
		else
		{
			ft_putstr("OK\n");
			verify_params(p, argc, argv);
		}
		free(p);
		p = NULL;
	}
	return (0);
}

