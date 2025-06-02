/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utiles.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xihu <xihu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:32:21 by xihu              #+#    #+#             */
/*   Updated: 2025/06/02 21:08:15 by xihu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c)
{
	return (ft_putchar(c));
}

int	ft_print_str(char *str)
{
	if (!str)
		return (ft_putstr("(null)"));
	return (ft_putstr(str));
}

int	ft_print_pointer(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	ft_putnbr_base((unsigned long)ptr, "0123456789abcdef", &count);
	return (count);
}

int	ft_print_int(int n)
{
	int				count;
	unsigned int	num;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		num = (unsigned int)(n * -1);
	}
	else
		num = (unsigned int)n;
	ft_putnbr_base (num, "0123456789", &count);
	return (count);
}
