/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:40:17 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/17 15:35:45 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putptr(unsigned long lnb, char *base, int fd);

int	ft_putptr(unsigned long lnb, char *base, int fd)
{
	int		i;

	i = 0;
	if (!lnb || fd < 0)
		return (ft_putstr_fd("(nil)", fd));
	i += ft_putstr_fd("0x", fd);
	if (lnb > 15)
	{
		i += putptr(lnb / 16, base, fd);
		lnb %= 16;
	}
	if (lnb < 16)
	{
		i += ft_putchar_fd(base[lnb], fd);
	}
	return (i);
}

static int	putptr(unsigned long lnb, char *base, int fd)
{
	int	i;

	i = 0;
	if (lnb > 15)
	{
		i += putptr(lnb / 16, base, fd);
		lnb %= 16;
	}
	if (lnb < 16)
	{
		i += ft_putchar_fd(base[lnb], fd);
	}
	return (i);
}
