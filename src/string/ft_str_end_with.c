/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_end_with.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:55:06 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/17 15:35:45 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corekit.h"

t_bool	ft_str_end_with(char *str, char c)
{
	int	str_len;

	if (!str)
		return (false);
	str_len = ft_strlen(str);
	if (str_len == 0)
		return (false);
	if (str[str_len - 1] == c)
		return (true);
	return (false);
}

t_bool	ft_str_end_with_str(const char *str, char *end)
{
	int	s_idx;
	int	end_idx;

	if (!str)
		return (false);
	if (!end)
		return (true);
	end_idx = ft_strlen(end);
	s_idx = ft_strlen(str);
	while (s_idx >= 0 && end_idx >= 0 && str[s_idx] == end[end_idx])
	{
		s_idx--;
		end_idx--;
	}
	if (end_idx < 0)
		return (true);
	return (false);
}
