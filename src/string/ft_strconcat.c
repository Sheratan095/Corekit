/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strconcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:38:33 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/17 15:35:45 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*check_parameters(char *s1, char *s2);

char	*ft_strconcat(char *s1, char *s2, t_bool free_s1, t_bool free_s2)
{
	char	*result;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (NULL);
	result = check_parameters(s1, s2);
	if (result == NULL)
	{
		result = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
		if (!result)
			return (NULL);
		i = 0;
		j = 0;
		while (s1[j])
			result[i++] = s1[j++];
		j = 0;
		while (s2[j])
			result[i++] = s2[j++];
	}
	if (free_s1 && s1)
		free(s1);
	if (free_s2 && s2)
		free(s2);
	return (result);
}

char	*check_parameters(char *s1, char *s2)
{
	if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	return (NULL);
}
