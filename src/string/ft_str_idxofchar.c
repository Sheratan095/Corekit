/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_idxofchar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:02:03 by maceccar          #+#    #+#             */
/*   Updated: 2024/08/29 16:09:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_idxofchar(const char *s, char c)
{
	int	i;

	i = -1;
	while (s && s[++i])
		if (s[i] == c)
			return (i);
	return (-1);
}

int	ft_str_idxofchar_from(const char *s, int start, char c)
{
	int	i;

	i = start - 1;
	while (s && s[++i])
		if (s[i] == c)
			return (i);
	return (-1);
}
