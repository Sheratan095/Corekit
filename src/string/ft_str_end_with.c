/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_end_with.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:55:06 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/16 17:53:06 by maceccar         ###   ########.fr       */
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
