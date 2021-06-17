/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owikman <owikman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 07:49:07 by owikman           #+#    #+#             */
/*   Updated: 2021/05/27 09:22:47 by owikman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putaddr(void *ptr);         // knows my ingridients, aka prototype

int		main(void)					   // start of instructions
{
	int		a;
	int		*ptr;						// instructions set

	a = 3;
	ptr = &a;
	ft_putaddr(ptr);
	return (0);
}
										// needs the ingridients, aka functions