/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 14/02/2024 01:34:18 by maceccar          #+#    #+#             */
/*   Updated: 24/02/2024 19:46:19 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "corekit.h"

int		ft_putptr(unsigned long lnb, char *base);

int		ft_is_in(char c, const char *ptr);

int		ft_putchar(char c);

int		ft_putstr(const char *str);

int		ft_putnbr(long int nb);

int		ft_printf(const char	*format, ...);

int		ft_putbase(unsigned int nb, char *base);

int		ft_unsignedputnbr(int n);

#endif
