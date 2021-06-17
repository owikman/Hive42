/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owikman <owikman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:05:26 by owikman           #+#    #+#             */
/*   Updated: 2021/05/29 18:06:56 by owikman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int n)
{
	if (n < 0)			// checks for negative value
	{
		return 1;		// if it is negative value return 1
	}
	if (n == 0)			// checks if zero       
	{
		return 1;		// if it is zero, return 1
	}
	else				// if not return ft_recursive_factorial result , check recursive youtube video
	{
		return(n * ft_recursive_factorial(n-1));		// n -1 = 
	}
}