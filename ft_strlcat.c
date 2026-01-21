/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:51:42 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/21 18:50:10 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	unsigned int	i;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize < len_dst)
		return (len_src + (dstsize));
	while (src[i] != '\0' && (len_dst + i) < (dstsize - 1))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

int	main(void)
{
	char	dst[12] = "hedef";

	printf("Birleşme öncesi dst : %s\n", dst);
	printf("%zu\n", ft_strlcat(dst, "kaynak", 16));
	printf("Birleşme sonrasi dst : %s\n", dst);
	return (0);
}
/*
dstnin mevcut uzunluğunu bul.
srcyi dstnin sonuna ekle, ancak dstsize sınırını aşma.
dstnin yeni uzunluğunu döndür (ekleme sonrası toplam uzunluk).
Eğer dstsize yetersizse, dstyi null-terminate et ve
srcnin uzunluğu + dstnin uzunluğunu döndür.
ft_strlcat("hedef", "kaynak", 6); "hedef" bir string literaldir.
String literalleri sadece okunabilir bellekte saklanır,
değiştirmeye çalışmak segmentation fault hatasına neden olur.

*** stack smashing detected ***: terminated
zsh: IOT instruction (core dumped)  ./a.out
|-> dst[12] oluşturulurken src yi kopyalayacak yer olmaması halinde hata veriyor
|--> dst dizisinin boyutu, hedef + kaynak + null terminatör için yeterli olmalı.
*/
