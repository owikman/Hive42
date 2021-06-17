/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owikman <owikman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:54:41 by owikman           #+#    #+#             */
/*   Updated: 2021/05/27 19:17:12 by owikman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_putchar(char c);

void	ft_print_numbers(void)									// function
{
	char number;

	number = '0';
	while (number <= '9')
    {
        putchar(number);
        number++;
    }
}