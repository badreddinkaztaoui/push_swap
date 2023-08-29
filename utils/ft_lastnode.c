/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastnode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:30:25 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/26 20:35:51 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node	ft_lastnode(t_node **stack)
{
	t_node	*curr;
	t_node	*last;

	curr = *stack;
	while (curr->next)
		curr = curr->next;
	last = curr;
	return (*last);
}
