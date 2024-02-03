/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebartol <lebartol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:44:44 by lebartol          #+#    #+#             */
/*   Updated: 2023/10/23 12:24:53 by lebartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put16(unsigned int lnb, char *base)
{
	int	i;

	i = 0;
	if (lnb > 15)
	{
		i += put16(lnb / 16, base);
		lnb %= 16;
	}
	if (lnb < 16)
	{
		i += ft_putchar(base[lnb]);
	}
	return (i);
}

int	ft_putbase(unsigned int nb, char *base)
{
	long	lnb;
	int		i;

	i = 0;
	lnb = nb;
	if (lnb > 15)
	{
		i += put16(lnb / 16, base);
		lnb %= 16;
	}
	if (lnb < 16)
	{
		i += ft_putchar(base[lnb]);
	}
	return (i);
}
