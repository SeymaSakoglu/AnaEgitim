/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakoglu <ssakoglu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:22:57 by ssakoglu          #+#    #+#             */
/*   Updated: 2026/01/06 20:47:23 by ssakoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return ('\0');
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (c);
		i++;
	}
	return (NULL);
}
