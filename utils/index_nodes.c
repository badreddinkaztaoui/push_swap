/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_nodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 01:43:04 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/09/02 20:57:19 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	index_nodes(t_node **stack_a)
{
	int		*arr;
	int		size;
	int		i;
	t_node	*curr;

	arr = list_to_array(stack_a, 0);
	size = ft_listsize(*stack_a);
	quick_sort(arr, 0, size - 1, 0);
	i = -1;
	while (++i < size)
	{
		curr = *stack_a;
		while (curr->num != arr[i])
			curr = curr->next;
		curr->index = i;
	}
	free(arr);
}
