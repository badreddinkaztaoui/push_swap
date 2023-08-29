/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 06:49:53 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/28 23:13:11 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		curr_num;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		exit(2);
	i = 0;
	while (++i < ac)
	{
		curr_num = ft_atoi(av[i]);
		if (ft_isdup_node(stack_a, curr_num))
			ft_error();
		shift(&stack_a, curr_num);
	}
	print_list(stack_a);
	deallocate(&stack_a);
	return (0);
}
