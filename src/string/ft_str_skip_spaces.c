/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_skip_spaces.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:52:46 by maceccar          #+#    #+#             */
/*   Updated: 2024/09/03 18:00:49 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corekit.h"

void	ft_str_skip_spaces(char *string, int *i)
{
	while (ft_isspace(string[*i]))
		(*i)++;
}
