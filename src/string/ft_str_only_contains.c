/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_only_contains.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 01:14:11 by maceccar          #+#    #+#             */
/*   Updated: 2025/02/13 01:14:11 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corekit.h"

t_bool	ft_str_only_contains(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_strchr(charset, str[i]))
			return (false);
		i++;
	}
	return (true);
}
