/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getidx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:40:55 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/27 16:46:32 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_getminidx(t_node *stack)
{
	int		idx;
	int		min;
	t_node	*curr;

	idx = 0;
	curr = stack;
	min = ft_min(stack);
	while (curr)
	{
		if (curr->num == min)
			return (min);
		curr = curr->next;
		min++;
	}
	return (-1);
}
