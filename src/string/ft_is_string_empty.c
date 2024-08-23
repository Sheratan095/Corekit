/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_string_empty.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:36:08 by maceccar          #+#    #+#             */
/*   Updated: 2024/08/23 17:56:30 by marvin           ###   ########.fr       */
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
