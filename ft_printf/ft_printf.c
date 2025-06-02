/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xihu <xihu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:24:31 by xihu              #+#    #+#             */
/*   Updated: 2025/06/02 21:07:54 by xihu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_handler(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (specifier == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (specifier == 'u')
		return (ft_print_uint(va_arg(args, unsigned int)));
	else if (specifier == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 0));
	else if (specifier == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 1));
	else if (specifier == '%')
		return (ft_print_percent());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	argus;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(argus, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && format [i + 1])
		{
			i++;
			count += ft_format_handler (format[i], argus);
		}
		else if (format[i] != '%')
			count += ft_putchar(format[i]);
		i++;
	}
	va_end (argus);
	return (count);
}
