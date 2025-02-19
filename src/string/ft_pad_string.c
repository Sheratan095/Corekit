/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pad_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:48:45 by maceccar          #+#    #+#             */
/*   Updated: 2025/02/19 17:48:45 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corekit.h"

//i: src/padding
//j: res
char	*ft_pad_string(char *src, char padding_char, int padding_nbr)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	if (!src)
		return (NULL);
	if (padding_char <= 0)
		return (src);
	result = ft_calloc((ft_strlen(src) + padding_nbr + 1), sizeof(char));
	if (!result)
		return (free(src), NULL);
	while (src[i])
		result[j++] = src[i++];
	i = 0;
	while (i++ < padding_nbr)
		result[j++] = padding_char;
	return (free(src), result);
}
