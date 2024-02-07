/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:23:33 by maceccar          #+#    #+#             */
/*   Updated: 2024/02/07 16:23:33 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*res;
	unsigned int	i;

	i = 0;
	res = (unsigned char *)str;
	while (i < n)
	{
		if (res[i] == (unsigned char)c)
		{
			return (res + i);
		}
		i++;
	}
	return (NULL);
}
