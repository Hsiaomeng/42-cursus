/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiaomeng.hu <xiaomeng.hu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:06:26 by xihu              #+#    #+#             */
/*   Updated: 2025/05/17 20:39:18 by xiaomeng.hu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	if (!d && !s)
		return (NULL);
	if (d == s)
		return (dst);
	if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}
/*
#include <stdio.h>
int main(void)
{
    char str1[] = "abcdef";

    printf("原始字符串：%s\n", str1);

    // 将 "abcd" 拷贝到 str1 的第3个字符位置（str1+2）
    ft_memmove(str1 + 2, str1, 4);

    printf("使用 ft_memmove 后：%s\n", str1);

    return 0;
}*/
