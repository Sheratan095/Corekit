/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_occurrences.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:22:21 by maceccar          #+#    #+#             */
/*   Updated: 2024/08/01 16:22:21 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find_occurrences(char *str, char c, size_t start_index)
{
	int	count;
	int	i;

	count = 0;
	i = start_index;
	while (str[i])
	{
		if (str[i++] == c)
			count++;
	}
	return (count);
}
