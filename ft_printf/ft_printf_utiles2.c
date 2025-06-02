/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utiles2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xihu <xihu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:22:59 by xihu              #+#    #+#             */
/*   Updated: 2025/06/02 20:21:30 by xihu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}

void	ft_putnbr_base(unsigned long n, char *base, int *count)
{
	int	base_len;

	base_len = 0;
	while (base [base_len])
		base_len++;
	if (n >= (unsigned long)base_len)
	{
		ft_putnbr_base (n / base_len, base, count);
		ft_putnbr_base (n % base_len, base, count);
	}
	else
	{
		*count += ft_putchar(base[n]);
	}
}

int	ft_numlen_base(unsigned long n, int base_len)
{
	int	len;

	len = 1;
	while (n >= (unsigned long)base_len)
	{
		n /= base_len;
		len++;
	}
	return (len);
}
