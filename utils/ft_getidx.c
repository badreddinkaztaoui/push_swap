/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getidx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:40:55 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/09/05 00:45:53 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_getidx(t_node *stack, int num)
{
	int		index;
	t_node	*curr;

	index = 0;
	curr = stack;
	while (curr)
	{
		if (curr->num == num)
			return (index);
		curr = curr->next;
		index++;
	}
	return (-1);
}
