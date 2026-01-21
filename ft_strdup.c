/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:10:29 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/21 18:50:13 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strdup(const char *s1)
{
	char	*copy_s;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(s1);
	copy_s = (char *)malloc(((len + 1) * sizeof(char)));
	if (copy_s == NULL)
		errno = ENOMEM;
	while (i < len)
	{
		copy_s[i] = s1[i];
		i++;
	}
	copy_s[i] = '\0';
	return (copy_s);
}

#include <stdio.h>

int	main (void)
{
	char	*arr = "kopyalama basarili";
	char	*copy_arr = ft_strdup(arr);

	if (copy_arr == NULL)
		perror ("Bellek atama başarisiz!");
	else
		printf ("%s\n", copy_arr);
	free(copy_arr);
	return (0);
}
