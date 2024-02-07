/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:22:13 by maceccar          #+#    #+#             */
/*   Updated: 2024/02/07 16:22:13 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putptr(unsigned long lnb, char *base)
{
	int	i;

	i = 0;
	if (lnb > 15)
	{
		i += putptr(lnb / 16, base);
		lnb %= 16;
	}
	if (lnb < 16)
	{
		i += ft_putchar(base[lnb]);
	}
	return (i);
}

int	ft_putptr(unsigned long lnb, char *base)
{
	int		i;

	i = 0;
	if (!lnb)
		return (ft_putstr("(nil)"));
	i += ft_putstr("0x");
	if (lnb > 15)
	{
		i += putptr(lnb / 16, base);
		lnb %= 16;
	}
	if (lnb < 16)
	{
		i += ft_putchar(base[lnb]);
	}
	return (i);
}
