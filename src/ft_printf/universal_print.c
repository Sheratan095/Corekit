/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:40:17 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/17 15:35:45 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_format(char format, va_list ap, int *is_spec, int fd);
static int	handle_specifier(char specifier, va_list ap, int fd);

int	universal_print(int fd, const char *format, va_list ap)
{
	int		i;
	int		inside_specifier;
	int		*ptr;

	i = 0;
	inside_specifier = 0;
	ptr = &inside_specifier;
	if (fd < 0)
		return (-1);
	while (*format)
	{
		if (inside_specifier == 0 && *format == '%')
			inside_specifier = 1;
		else if (inside_specifier == 1)
			i += print_format(*format, ap, ptr, fd);
		else
			i += ft_putchar_fd(*format, fd);
		format++;
	}
	return (i);
}

static int	print_format(char format, va_list ap, int *is_spec, int fd)
{
	if (ft_strchr("csdiupxX%", format))
	{
		*is_spec = 0;
		return (handle_specifier(format, ap, fd), fd);
	}
	return (0);
}

static int	handle_specifier(char specifier, va_list ap, int fd)
{
	char	*base;

	if (specifier == 'i' || specifier == 'd')
		return (ft_putnbr_fd(va_arg(ap, int), fd));
	else if (specifier == 'c')
		return (ft_putchar_fd((va_arg(ap, int)), fd));
	else if (specifier == 's')
		return (ft_putstr_fd((va_arg(ap, char *)), fd));
	else if (specifier == 'p')
	{
		base = "0123456789abcdef";
		return (ft_putptr(va_arg(ap, long unsigned int), base, fd));
	}
	else if (specifier == 'x')
		return (ft_putbase(va_arg(ap, unsigned int), "0123456789abcdef", fd));
	else if (specifier == 'X')
		return (ft_putbase(va_arg(ap, unsigned int), "0123456789ABCDEF", fd));
	else if (specifier == '%')
		return (ft_putchar_fd('%', fd));
	else if (specifier == 'u')
		return (ft_unsignedputnbr(va_arg(ap, int), fd));
	return (ft_putchar_fd(specifier, fd));
}
