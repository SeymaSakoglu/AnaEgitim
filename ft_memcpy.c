/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 20:00:51 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/21 18:50:26 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*dstemp;
	unsigned char	*srctemp;

	i = 0;
	dstemp = (unsigned char *)dst;
	srctemp = (unsigned char *)src;
	while (i < n)
	{
		dstemp[i] = srctemp[i];
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
