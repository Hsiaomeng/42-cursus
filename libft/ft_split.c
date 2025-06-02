/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiaomeng.hu <xiaomeng.hu@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:06:07 by xihu              #+#    #+#             */
/*   Updated: 2025/05/18 10:53:26 by xihu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*result;

	result = (char *)ft_calloc(n + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s, n + 1);
	return (result);
}

static void	*free_split(char **array, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		free(array[i++]);
	free(array);
	return (NULL);
}

static char	**fill_result(char **result, const char *s, char c, size_t count)
{
	size_t	i;
	size_t	len;
	char	*start;

	i = 0;
	while (i < count)
	{
		while (*s == c)
			s++;
		start = (char *)s;
		len = 0;
		while (*s && *s != c)
		{
			s++;
			len++;
		}
		result[i] = ft_strndup(start, len);
		if (!result[i])
			return (free_split(result, i));
		i++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)ft_calloc(word_count + 1, sizeof(char *));
	if (!result)
		return (NULL);
	return (fill_result(result, s, c, word_count));
}
