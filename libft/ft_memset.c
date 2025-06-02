/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiaomeng.hu <xiaomeng.hu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:06:23 by xihu              #+#    #+#             */
/*   Updated: 2025/05/15 03:04:29 by xihu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len)
	{
		*ptr = (unsigned char)c;
		ptr++;
		len--;
	}
	return (b);
}

/*
int main(void)
{
    char b[] = "Hello, World!";
    memset (b, 'X', 6);
    printf(b);
    return 0;
}*/
