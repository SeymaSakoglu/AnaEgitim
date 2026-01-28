/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:09:15 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/28 19:22:36 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned int	i;
	unsigned int	j;
	size_t	len;
	char	*copy_s;

	i = 0;
	j = 0;
	len = ft_strlen(s1);

	while (i < len)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				break ;
			}
			j++;
		}
		if (set[j] == '\0')
			break ;
		i++;
	}
	while (len > i)
	{
		j = 0;
		while (set[j])
		{
			if (s1[len - 1] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		len--;
	}
	copy_s = (unsigned char *)malloc((len - i + 2) * sizeof(char));
	if (copy_s == NULL)
		return (NULL);
	j = 0;
	while ((i + j) < len)
	{
		copy_s[j] = s1[i + j];
		j++;
	}
	copy_s[i + j] = '\0';
	return (copy_s);
}
