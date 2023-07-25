/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddidenko <ddidenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:44:16 by ddidenko          #+#    #+#             */
/*   Updated: 2023/06/20 13:42:04 by ddidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlow(unsigned int nb)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	if (nb >= 16)
		i += ft_hexlow(nb / 16);
	i += ft_putchar(hex[nb % 16]);
	return (i);
}

int	ft_hexupp(unsigned int nb)
{
	int		i;
	char	*hex;

	hex = "0123456789ABCDEF";
	i = 0;
	if (nb >= 16)
		i += ft_hexupp(nb / 16);
	i += ft_putchar(hex[nb % 16]);
	return (i);
}

int	ft_hexptr(unsigned long nb)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	if (nb >= 16)
		i += ft_hexptr(nb / 16);
	i += ft_putchar(hex[nb % 16]);
	return (i);
}

int	ft_pointer(unsigned long ptr)
{
	int	i;

	i = 2;
	ft_putchar('0');
	ft_putchar('x');
	i += ft_hexptr(ptr);
	return (i);
}
