/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:49:14 by maceccar          #+#    #+#             */
/*   Updated: 2024/08/29 17:49:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_cmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*s1p;
	unsigned char	*s2p;

	s1p = (unsigned char *)s1;
	s2p = (unsigned char *)s2;
	i = 0;
	if (!s1 || !s2)
		return (INT_MIN);
	while (s2p[i] == s1p[i] && s2p[i] && s1p[i])
		i++;
	return (s1p[i] - s2p[i]);
}
