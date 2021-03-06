/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusargsy <lusargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 15:07:17 by lusargsy          #+#    #+#             */
/*   Updated: 2021/07/01 16:05:57 by lusargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(char *str)
{
	long sign;
	long ret;

	sign = 1;
	ret = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		else
			str++;
	}
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		ret = ret * 10 + (*str - '0');
		str++;
	}
	return (ret * sign);
}
