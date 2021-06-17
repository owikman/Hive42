/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owikman <owikman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:08:08 by owikman           #+#    #+#             */
/*   Updated: 2021/05/28 07:15:52 by owikman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);						// string that is saved on the putchar , fuction calls putchar to store the character on the string
												// char c is a data type that holds one character
void	ft_print_reverse_alphabet(void)			// function that goes with the while loop to make the letters go from z to a
{
	char	letter;								// announces that the character is a letter

	letter = 'z';								// starting from the letter z
	while (letter >= 'a')						// while its higher or the same as a the loop will continue
	{
		ft_putchar(letter);						// stores the character to the string, function
		letter--;								// everytime you go in the loop the letter is minused
	}
}
