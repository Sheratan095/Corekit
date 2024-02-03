/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_in.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebartol <lebartol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:33:13 by lebartol          #+#    #+#             */
/*   Updated: 2023/10/19 20:03:51 by lebartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_in(char c, const char *ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		if (ptr[i] == (unsigned char)c)
		{
			return (i + 1);
		}
		i++;
	}
	return (0);
}
