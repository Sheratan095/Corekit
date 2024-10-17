/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_string_empty.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:36:08 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/17 15:35:45 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corekit.h"

t_bool	ft_is_string_empty(char	*string)
{
	int	i;

	i = 0;
	if (!string)
		return (true);
	while (string[i])
	{
		if (!ft_isspace(string[i]))
			return (false);
		i++;
	}
	return (true);
}
