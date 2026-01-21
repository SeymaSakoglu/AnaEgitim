/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:41:01 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/21 18:50:38 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_temp;
	unsigned int	i;

	s_temp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_temp[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (NULL);
}

int	main(void)
{
	char	b[] = "denemebiriki";

	printf("%p", ft_memchr(b, 'm', 10));
	return (0);
}
