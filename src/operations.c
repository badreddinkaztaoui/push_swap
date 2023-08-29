/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 01:45:45 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/27 15:48:14 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	shift(t_node **stack, int val)
{
	t_node	*new_node;
	t_node	*curr;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		exit(2);
	new_node->num = val;
	new_node->next = NULL;
	if (!(*stack))
		*stack = new_node;
	else
	{
		curr = *stack;
		while (curr->next)
			curr = curr->next;
		curr->next = new_node;
	}
}

int	pop(t_node **stack)
{
	t_node	*tmp;
	t_node	*curr;
	int		val;

	curr = *stack;
	if (!curr)
		return (-1);
	tmp = curr;
	val = tmp->num;
	*stack = curr->next;
	free(tmp);
	return (val);
}

void	push(t_node **stack, int val)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		exit(2);
	new_node->num = val;
	new_node->next = *stack;
	*stack = new_node;
}

void	deallocate(t_node **stack)
{
	t_node	*curr;
	t_node	*tmp;

	curr = *stack;
	while (curr)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}
	free(curr);
	*stack = NULL;
}
