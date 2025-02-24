/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:40:17 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/17 15:35:45 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put16(unsigned int lnb, char *base, int fd);

int	ft_putbase(unsigned int nb, char *base, int fd)
{
	long	lnb;
	int		i;

	i = 0;
	lnb = nb;
	if (lnb > 15)
	{
		i += put16(lnb / 16, base, fd);
		lnb %= 16;
	}
	if (lnb < 16)
	{
		i += ft_putchar_fd(base[lnb], fd);
	}
	return (i);
}

static int	put16(unsigned int lnb, char *base, int fd)
{
	int	i;

	i = 0;
	if (lnb > 15)
	{
		i += put16(lnb / 16, base, fd);
		lnb %= 16;
	}
	if (lnb < 16)
	{
		i += ft_putchar_fd(base[lnb], fd);
	}
	return (i);
}
