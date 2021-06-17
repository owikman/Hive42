/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owikman <owikman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:08:08 by owikman           #+#    #+#             */
/*   Updated: 2021/05/28 07:43:22 by owikman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
	char	letter;
	
	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
} 
void	ft_print_reverse_alphabet(void);

int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}