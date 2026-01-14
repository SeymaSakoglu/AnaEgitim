/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:47:33 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/14 14:50:21 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;
	size_t	i;

	i = 0;
	slen = 0;
	slen = ft_strlen(src);
	if (dstsize == 0)
		return (slen);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (slen);
}

int	main(void)
{
	char	dst[10];
	size_t	len;

	len = 0;
	len = ft_strlcpy(dst, "kaynak", 4);
	printf("%s\n", dst);
	printf("%zu\n", len);
	return (0);
}
/*ft_strlcpy(char *dst, const char *src, size_t dstsize) fonksiyonu
Her durumda srcnin uzunluğunu döndürür,
(dstsize - 1) src den kopyalanan karakter sayısını gösterir.*/
// ft_strlcpy fonk. çalıştırınca dst e kopyalama işlemi gerçekleşecek.
// src den dst ye kopyalanan karakter dizisini yazdırdım. ("%s", dst)
// src uzunluğunu yazdırıyorum. ("%zu\n", len)
