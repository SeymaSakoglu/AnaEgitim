/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:26:00 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/31 17:22:32 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	char	*ptr;

	ptr = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			ptr = (char *)(str + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(str + i));
	return (ptr);
}
