/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudokumain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owikman <owikman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:02:26 by starnane          #+#    #+#             */
/*   Updated: 2021/06/06 16:35:18 by owikman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_creatematrix(int nbr, char **params);

int 	main (int argc, char **argv)
{
		
	ft_creatematrix(argc, argv);				// call out for our creatematrix functionf
	return (0);
}

