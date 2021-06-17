/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owikman <owikman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:05:07 by owikman           #+#    #+#             */
/*   Updated: 2021/06/03 19:55:23 by owikman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char 	*ft_strdup(char *src);

int 	main(void)
{
	char	test[42] = "rataatataa";
	char	*dup;

	dup = ft_strdup(test);
	printf("%s\n", dup);
	dup = strdup(test);
	printf("%s\n", dup);
}
