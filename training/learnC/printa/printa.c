/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owikman <owikman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:36:15 by owikman           #+#    #+#             */
/*   Updated: 2021/06/15 13:30:17 by owikman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void aff_a(char *str)
{
	write(1, "a\n", 2);
	return (0);
}


int main(void)
{
	write(1, "a\n", 2);
	return (0);
}
