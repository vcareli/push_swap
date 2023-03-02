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

void	ft_aide()
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
			ft_putstr("Error. Mauvaise quantité d'arguments.\n");
		exit (1);
	}
	else
	{
		p = 
		if (!ft_strncmp(argv[1], "-h", 3) || !ft_strncmp(argv[1], "-H", 3))
			ft_aide();
		else
			ft_putstr("OK\n");
	}

	return (0);
}
