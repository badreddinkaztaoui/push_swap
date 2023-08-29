/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:00:20 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/27 16:02:47 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_max(t_node *stack)
{
	int	max_value;

	max_value = stack->num;
	while (stack)
	{
		if (stack->num > max_value)
			max_value = stack->num;
		stack = stack->next;
	}
	return (max_value);
}
