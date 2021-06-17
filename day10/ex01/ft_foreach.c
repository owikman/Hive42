/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owikman <owikman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:47:15 by owikman           #+#    #+#             */
/*   Updated: 2021/06/09 10:12:57 by owikman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))		// we accept the adress in the function argument and array of intergors, the length of this array and the adress of the functiom
{																// to which we will apply functio to each element of the intergor array 
	int	i;								// declare the number of past elements

	i = 0;									// initialize the counter to zero						
	if (!tab || !f)
		return;
	while (i < length)						// start the loop that loops through each element of the array 
	{
		f(tab[i]);							// we use each number of the array by sending it to the function adress which we got in the arguments, 13
		++i;								// incrament through each loop
	}
}
void ft_putnbr(int nbr);

int 	main(void)
{
	int		tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	ft_foreach(tab, 12, &ft_putnbr);
	return (0);
}