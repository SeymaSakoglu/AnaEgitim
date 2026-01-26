/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:37:06 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/26 12:59:49 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*join_s;
	size_t	len1;
	size_t	len2;
	unsigned int	i;
	unsigned int	j;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	j = 0;
	join_s = ft_calloc((len1 + len2 + 1), sizeof(char));
	while (s2[j] != '\0')
	{
		while (s1[i] != '\0')
		{
			join_s[i] = s1[i];
			i++;
		}
		join_s[i + j] = s2[j];
		j++;
	}
	join_s[i + j] = '\0';
	return (join_s);
}
