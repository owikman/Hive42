/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owikman <owikman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:28:34 by owikman           #+#    #+#             */
/*   Updated: 2021/06/03 20:54:28 by owikman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char    *ft_strdup(char *src)
{
    char    *dest;
    int        i;
											// malloc = we ask the computer to open up an array with the correct amount of characters
    i = 0;
    if (!src) 							// if no source, return nothing
        return (NULL);
    while (src[i] != '\0')				// while source isn't the end of the string, keep incramenting
        i++;
    dest = (char*)malloc(sizeof(char) * (i + 1));	// when source length is confirmed, we allocate a destination with the same length using malloc
    if (!dest)								// if destination is not long enough, return nothing,, cant barely be tested 
        return (NULL);
    i = 0;								// we reset and go back to our first character index		
    while (src[i] != '\0')				// while our source hasnt hit the end/null 
    {
        dest[i] = src[i];				// we copy our source to our destination one by one
        i++;										// by using incrament
    }
    dest[i] = '\0';								// when our destination has hit the end
    return (dest);										// we return destination
}
int 	main(void)
{
	char	test[42] = "rataatataa";
	char	*dup;

	dup = ft_strdup(test);							// here we compare the og standard duplicator with our artifcial made
	printf("%s\n", dup);							// and then we print both
	dup = strdup(test);
	printf("%s\n", dup);
}
