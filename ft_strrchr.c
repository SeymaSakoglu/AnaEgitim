/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:26:00 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/21 18:49:35 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	const char	*ptr;

	ptr = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			ptr = str + i;
			i++;
		}
		else if (str[i] != (char)c)
			i++;
	}
	if ((char)c == '\0')
		return ((char *)(str + i));
	return ((char *)ptr);
}

int	main(void)
{
	printf("%s", ft_strrchr ("taktak", 'a'));
	return (0);
}
