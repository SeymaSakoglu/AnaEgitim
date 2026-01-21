/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 19:01:16 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/21 18:48:59 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*s_temp;

	i = 0;
	s_temp = (unsigned char *)s;
	while (i < n)
	{
		s_temp[i] = '0';
		i++;
	}
}

int	main(void)
{
	char	str[] = "deneme";

	ft_bzero(str, 6);
	printf("%s", str);
	return (0);
}
