/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:40:17 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/17 15:35:45 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	putnbr_fd(long int nb, int fd);

int	ft_putnbr_fd(int n, int fd)
{
	int		i;
	long	lnb;

	i = 0;
	lnb = n;
	if (fd < 0)
		return (0);
	if (lnb < 0)
	{
		i += ft_putchar_fd('-', fd);
		lnb = -lnb;
	}
	i += putnbr_fd(lnb, fd);
	return (i);
}

static int	putnbr_fd(long int nb, int fd)
{
	int	i;

	i = 0;
	if (nb >= 10)
	{
		i += putnbr_fd(nb / 10, fd);
		nb = nb % 10;
	}
	if (nb < 10)
		i += ft_putchar_fd(nb + 48, fd);
	return (i);
}
