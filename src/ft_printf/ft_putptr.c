/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebartol <lebartol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:50:24 by lebartol          #+#    #+#             */
/*   Updated: 2023/10/19 19:22:52 by lebartol         ###   ########.fr       */
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
