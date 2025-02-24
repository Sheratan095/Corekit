/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedputnbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:40:17 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/17 15:35:45 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsignedputnbr(int n, int fd)
{
	long	ln;

	ln = n;
	if (ln < 0)
	{
		ln = -ln;
		ln = 4294967296 - ln;
	}
	return (ft_putnbr_fd(ln, fd));
}
