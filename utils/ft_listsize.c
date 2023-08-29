/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:35:52 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/26 15:38:51 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_listsize(t_node *list)
{
	int		count;
	t_node	*curr;

	count = 0;
	curr = list;
	while (curr)
	{
		count += 1;
		curr = curr->next;
	}
	return (count);
}
