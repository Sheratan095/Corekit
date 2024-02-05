/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duplicate_char_matrix.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:08:27 by marvin            #+#    #+#             */
/*   Updated: 2024/02/05 19:08:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corekit.h"

char	**ft_duplicate_char_matrix(char **matrix)
{
	int		count_rows;
	int		str_len;
	char	**result;
	int		i;

	count_rows = ft_count_matrix_row((void **)matrix);
	result = malloc(sizeof(char *) * (count_rows + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (matrix[i])
	{
		str_len = ft_strlen(matrix[i]);
		result[i] = ft_calloc(str_len + 1, sizeof(char));
		ft_strlcpy(result[i], matrix[i], str_len + 1);
		i++;
	}
	result[i] = NULL;
	return (result);
}
