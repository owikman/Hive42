/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owikman <owikman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:35:25 by owikman           #+#    #+#             */
/*   Updated: 2021/06/02 08:28:08 by owikman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int x;
	int result;
	int sign;

	sign = 1;
	result = 0;
	x = 0;
	while (str[x] == '\n' || str[x] == '\r' || str[x] == ' ' || str[x] == '\v'
		|| str[x] == '\f' || str[x] == '\t')
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			sign = -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		result = result * 10 + str[x] - '0';
		x++;
	}
	result = result * sign;
	return (result);
}
