/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 20:00:51 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/16 20:34:44 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*dsTemp;
	unsigned char	*srcTemp;

	i = 0;
	dsTemp = (unsigned char *)dst;
	srcTemp = (unsigned char *)src;
	while (i < n)
	{
		dsTemp[i] = srcTemp[i];
		i++;
	}
	return (dst);
}

int	main(void)
{
	char	dest[] = "KAYNAK";
	char	source[] = "hedef";

	ft_memcpy(dest, source, 2);
	printf("destcopy = %s\n", dest);
	return (0);
}
