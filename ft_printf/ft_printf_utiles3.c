/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utiles3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xihu <xihu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:42:37 by xihu              #+#    #+#             */
/*   Updated: 2025/06/02 21:05:04 by xihu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uint(unsigned int n)
{
	int	count;

	count = 0;
	ft_putnbr_base (n, "0123456789", &count);
	return (count);
}

int	ft_print_hex(unsigned int n, int uppercase)
{
	int	count;

	count = 0;
	if (uppercase)
		ft_putnbr_base (n, "0123456789ABCDEF", &count);
	else
		ft_putnbr_base (n, "0123456789abcdef", &count);
	return (count);
}

int	ft_print_percent(void)
{
	return (ft_putchar('%'));
}
