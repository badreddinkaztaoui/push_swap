/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdup_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 06:50:27 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/18 06:50:57 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_isdup_node(t_node *root, int val)
{
	t_node	*curr;

	curr = root;
	while (curr)
	{
		if (curr->num == val)
			return (1);
		curr = curr->next;
	}
	return (0);
}
