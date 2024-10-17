/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_start_with.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:55:06 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/17 15:35:45 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corekit.h"

t_bool	ft_str_start_with(char *str, char c)
{
	if (!str)
		return (false);
	if (str[0] == c)
		return (true);
	return (false);
}
