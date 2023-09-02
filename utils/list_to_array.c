/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_to_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 01:47:23 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/09/03 00:39:24 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	*list_to_array(t_node **stack_a, int dir)
{
	int		size;
	int		*arr;
	int		i;
	t_node	*curr;

	size = ft_listsize(*stack_a);
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		ft_error();
	curr = *stack_a;
	i = -1;
	while (++i < size)
	{
		arr[i] = curr->num;
		curr = curr->next;
	}
	quick_sort(arr, 0, size - 1, dir);
	return (arr);
}
