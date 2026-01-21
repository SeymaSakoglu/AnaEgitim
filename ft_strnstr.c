/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:46:18 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/21 18:49:28 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	else
	{
		while (haystack[i] != '\0')
		{
			i++;
			if (haystack[i] == needle[j])
			{
				while (haystack[i + j] && needle[j] != '\0' && (i + j < len))
				{
					j++;
				}
				return ((char *)haystack + i);
			}
		}
	}
	return (NULL);
}

int	main(void)
{
	printf ("%s", ft_strnstr("merhaba", "hab", 6));
	return (0);
}
