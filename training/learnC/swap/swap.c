/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owikman <owikman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:17:51 by owikman           #+#    #+#             */
/*   Updated: 2021/06/15 14:19:49 by owikman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_swap(int *a, int *b)
{
	int middleman;
	{
		middleman = *a;
		*a = *b;
		*b = middleman;
		printf("%d,%d\n", *a, *b);
	}
}
int main(void)
{
	int a;
	int b;
	a = 24;
	b = 42;
	ft_swap(&a, &b);
	return (0);
}
