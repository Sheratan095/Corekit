/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_index_of.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:45:57 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/17 18:00:03 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corekit.h"

ssize_t	ft_matrix_index_of(char **matrix, char *target)
{
	int	i;

	if (ft_count_matrix_row((const void **)matrix) == 0 || !target)
		return (-1);
	i = 0;
	while (matrix[i])
	{
		if (ft_strlen(matrix[i]) == ft_strlen(target))
		{
			if (ft_strcmp(matrix[i], target) == 0)
				return (i);
		}
		i++;
	}
	return (-1);
}
