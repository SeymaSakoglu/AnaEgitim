/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 20:34:26 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/21 18:50:22 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char	*dtemp;
	unsigned char	*stemp;

	i = 0;
	dtemp = (unsigned char *)dst;
	stemp = (unsigned char *)src;
	if (dtemp > stemp && dtemp < stemp + len)
	{
		while (len > 0)
		{
			len--;
			dtemp[len] = stemp[len];
		}
	}
	else
	{
		while (i < len)
		{
			dtemp[i] = stemp[i];
			i++;
		}
	}
	return (dst);
}

int	main(void)
{
	char	dest[] = "KAY";
	char	source[] = "hedef";

	ft_memmove(dest, source, 10);
	printf("destcopy = %s\n", dest);
	return (0);
}
/*
 Bellekte çakışma ihtimalini önlemek için if (koşulu oluşturuldu)
kopyalama işlemi len-- olarak sondan başa yapıyoruz.
*/
