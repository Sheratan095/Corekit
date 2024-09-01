/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strconcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:38:33 by maceccar          #+#    #+#             */
/*   Updated: 2024/09/01 18:51:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strconcat(char *s1, char *s2, enum e_bool free_src)
{
	char	*result;
	int		i;
	int		j;

	if (!s1)
		return (s2);
	if (!s2)
		return (s1);
	result = ft_calloc(sizeof(char), ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
		result[i++] = s1[j++];
	j = 0;
	while (s2[j])
		result[i++] = s2[j++];
	if (free_src)
	{
		free(s1);
		free(s2);
	}
	return (result);
}
