/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owikman <owikman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:04:25 by owikman           #+#    #+#             */
/*   Updated: 2021/06/08 14:14:57 by owikman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef void (*funptr)(char);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}

int		main()
{
	funptr		f;
	
	f = &ft_putchar;
	f('z');
	ft_putchar('\n');
	return (0);
}