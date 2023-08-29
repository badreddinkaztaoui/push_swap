/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 01:53:59 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/21 17:41:43 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_list(t_node *list)
{
	t_node	*curr;

	curr = list;
	while (curr)
	{
		printf("[%d]", curr->num);
		curr = curr->next;
	}
	printf("\n");
}
