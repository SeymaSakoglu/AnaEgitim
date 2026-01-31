/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:33:47 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/31 20:46:35 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	longn;

	longn = n;
	if (longn < 0)
	{
		ft_putchar_fd('-', fd);
		longn *= -1;
	}
	if (longn <= 9)
		ft_putchar_fd((longn + '0'), fd);
	else if (longn > 9)
	{
		ft_putnbr_fd((longn / 10), fd);
		ft_putnbr_fd((longn % 10), fd);
	}
}
