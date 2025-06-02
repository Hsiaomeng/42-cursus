/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiaomeng.hu <xiaomeng.hu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:08:09 by xihu              #+#    #+#             */
/*   Updated: 2025/05/18 11:13:37 by xihu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		last_pos;
	char	ch;

	ch = (char)c;
	i = 0;
	last_pos = -1;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			last_pos = i;
		i++;
	}
	if (ch == '\0')
		return ((char *)(s + i));
	if (last_pos >= 0)
		return ((char *)(s + last_pos));
	return (NULL);
}
