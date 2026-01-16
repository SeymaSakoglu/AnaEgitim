/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:48:43 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/16 19:00:58 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*b_temp;

	i = 0;
	b_temp = (unsigned char *)b;
	while (i < len)
	{
		b_temp[i] = c;
		i++;
	}
	return (b);
}

int	main(void)
{
	char	b[] = "deneme";

	printf("b = %s\n", b);
	ft_memset(b, 'c', 2);
	printf("b = %s", b);
	return (0);
}
