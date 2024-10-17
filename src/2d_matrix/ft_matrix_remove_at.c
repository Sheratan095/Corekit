/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_remove_at.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:21:06 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/17 15:35:45 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corekit.h"

/**
 @brief Remove a row from the matrix

 @param matrix Pointer to the char matrix
 @param index Index of the row to delete
 @param free_matrix Boolean that establish if the "old matrix" has to be freed

 @details
	i is used to pass through the resulting matrix
	j is used to pass through the source matrix

	Get the number size of the matrix and check it
	Alloc and memcheck
	Copy each line of the old matrix in to the new one
		except for the one at the specified index

 @return Pointer to the matrix without the specified line
*/
char	**ft_matrix_remove_at(char **matrix, size_t index, t_bool free_matrix)
{
	size_t		i;
	size_t		j;
	size_t		row_nbr;
	char		**result;

	if (!matrix)
		return (NULL);
	row_nbr = ft_count_matrix_row((const void **)matrix);
	if (row_nbr == 0 || index >= row_nbr)
		return (matrix);
	result = ft_calloc(sizeof(char **), row_nbr - 1 + 1);
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (matrix[j])
	{
		if (j != index)
			result[i++] = ft_strdup(matrix[j]);
		j++;
	}
	if (free_matrix)
		ft_free_matrix((void **)matrix);
	return (result);
}
