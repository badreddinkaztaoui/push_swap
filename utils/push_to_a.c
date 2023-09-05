/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 02:45:10 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/09/05 01:39:36 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_move_to_top(t_node **stack_b)
{
	int		size;
	int		index;
	t_node	*stack_tmp;

	size = ft_listsize(*stack_b);
	stack_tmp = *stack_b;
	index = ft_getidx(*stack_b, ft_max(*stack_b));
	if (index < (size / 2))
	{
		while (index > 0)
		{
			rb(stack_b);
			index--;
		}
	}
	else
	{
		while (index < size)
		{
			rrb(stack_b);
			index++;
		}
	}
}

int	max_is_top(t_node *stack_b, int num)
{
	int	i;

	i = 0;
	while (stack_b)
	{
		if (stack_b->num == num)
			return (i);
		stack_b = stack_b->next;
		i++;
	}
	return (-1);
}

void	ft_check_pa(t_node **a, t_node **b, t_bta *params)
{
	if ((*b)->num == params->arr[params->index])
	{
		pa(a, b);
		params->index++;
	}
	else if (params->counter == 0
		|| (*b)->num > peek(*a))
	{
		pa(a, b);
		ra(a);
		params->counter++;
	}
	else
		ft_move_to_top(b);
}

void	push_back_to_a(t_node **a, t_node **b)
{
	t_bta	params;

	params.index = 0;
	params.counter = 0;
	params.arr = list_to_array(b, 1);
	while (*b)
	{
		if (max_is_top(*b, params.arr[params.index]) != -1)
			ft_check_pa(a, b, &params);
		else
		{
			rra(a);
			params.counter--;
			params.index++;
		}
	}
	free(params.arr);
	while (params.counter > 0)
	{
		rra(a);
		params.counter--;
	}
}
