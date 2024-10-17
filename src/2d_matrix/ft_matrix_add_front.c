/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_add_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:10:55 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/17 15:35:45 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corekit.h"

char	**ft_matrix_add_front(char **matrix, char *str, t_bool free_mtx)
{
	int		i;
	int		j;
	int		new_len;
	char	**new_matrix;

	i = 0;
	j = 0;
	new_len = ft_count_matrix_row((const void **)matrix);
	if (str)
		new_len += 1;
	new_matrix = ft_calloc(sizeof(char *), new_len + 1);
	if (str)
		new_matrix[j++] = ft_strdup(str);
	if (matrix)
	{
		while (matrix[i])
			new_matrix[j++] = ft_strdup(matrix[i++]);
		if (free_mtx)
			ft_free_matrix((void **)matrix);
	}
	return (new_matrix);
}
