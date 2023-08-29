/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 01:59:37 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/15 03:36:48 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_iswspace(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

static void	ft_isinrange(int result, char c, int sign)
{
	if (sign == 1)
		if (result > (INT_MAX - (c - '0')) / 10)
			ft_error();
	if (sign == -1)
		if (result > (2147483648 - (c - '0')) / 10)
			ft_error();
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		result;

	i = 0;
	result = 0;
	sign = 1;
	while (ft_iswspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
		ft_error();
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			ft_error();
		ft_isinrange(result, str[i], sign);
		result = result * 10 + str[i++] - '0';
	}
	return (result * sign);
}
