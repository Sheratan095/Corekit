/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:40:17 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/17 15:35:45 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		dp = dest + n;
		sp = src + n;
		while (n-- > 0)
		{
			*--dp = *--sp;
		}
	}
	else
	{
		dp = dest;
		sp = src;
		while (n-- > 0)
		{
			*dp++ = *sp++;
		}
	}
	return (dest);
}
