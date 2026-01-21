/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 09:17:29 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/20 11:32:51 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*arr;
	unsigned int	total_size;
	unsigned int	i;

	i = 0;
	total_size = (unsigned int)(count * size);
	arr = (unsigned char *)malloc(total_size);
	while (i < count)
	{
		arr[i] = '0';
		i++;
	}
	if (arr == NULL)
		errno = ENOMEM;
	return (arr);
}

int	main (void)
{
	unsigned char	*arr;

	arr = (unsigned char *)ft_calloc(2, sizeof (char));
	if (arr == NULL)
		perror ("Bellek atama başarisiz!");
	else
		printf ("%s\n", arr);
	free(arr);
	return (0);
}
