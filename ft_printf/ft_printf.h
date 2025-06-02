/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xihu <xihu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:17:19 by xihu              #+#    #+#             */
/*   Updated: 2025/06/02 21:05:26 by xihu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putnbr_base(unsigned long n, char *base, int *count);
int		ft_format_handler(char specifier, va_list args);
int		ft_printf(const char *format, ...);

int		ft_print_char(char c);
int		ft_print_str(char *str);
int		ft_print_pointer(void *ptr);
int		ft_print_int(int n);
int		ft_print_uint(unsigned int n);
int		ft_print_hex(unsigned int n, int uppercase);
int		ft_print_percent(void);

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_numlen_base(unsigned long n, int base_len);

#endif
