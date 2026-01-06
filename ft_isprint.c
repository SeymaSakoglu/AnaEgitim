/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:54:44 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/06 19:57:49 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c<= 126)
		return (c);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isprint ('3'));
	return (0);
}
