/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:01:42 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/26 12:34:45 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy_s;
	unsigned int	i;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen (s + start);
	copy_s = ft_calloc (len + 1, sizeof(char));
	while (i < len)
	{
		copy_s[i] = s[start];
		i++;
		start++;
	}
	copy_s[i] = '\0';
	return (copy_s);
}
