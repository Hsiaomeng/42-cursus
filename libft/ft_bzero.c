/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiaomeng.hu <xiaomeng.hu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 01:20:08 by xihu              #+#    #+#             */
/*   Updated: 2025/05/15 01:00:55 by xihu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
		return ;
	s = ft_memset(s, 0, n);
}
/*
int main(void)
{
    char str[50] = "Hello, World!";
    printf("Before ft_bzero: %s\n", str);
    ft_bzero(str, 5);
    printf("After ft_bzero: %s\n", str);
    return 0;
}*/
