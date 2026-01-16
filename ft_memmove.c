/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 20:34:26 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/16 20:58:59 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char	*dsTemp;
	unsigned char	*srcTemp;

	i = 0;
	dsTemp = (unsigned char *)dst;
	srcTemp = (unsigned char *)src;
	//if ()
	while (i < len)
	{
		dsTemp[i] = srcTemp[i];
		i++;
	}
	return (dst);
}


// memcpy den farki cakisma ihtimalinde hata vermez!
// Cakisma nedir ? dst'e kopyalanacak src'nin adreslerinin cakismasi:
//dst ye src veya src+2 yazilmasi durumu gibi...
