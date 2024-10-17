/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_idxofchar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:02:03 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/17 15:35:45 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_str_idxofchar(const char *str, char c)
{
	ssize_t	i;

	i = -1;
	while (str && str[++i])
		if (str[i] == c)
			return (i);
	return (-1);
}

ssize_t	ft_str_idxofchar_from(const char *str, int start, char c)
{
	ssize_t	i;

	i = start - 1;
	while (str && str[++i])
		if (str[i] == c)
			return (i);
	return (-1);
}
