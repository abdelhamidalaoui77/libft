/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:55:16 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/26 19:45:32 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	lenght;

	lenght = 0;
	while (s[lenght])
		lenght++;
	return (lenght);
}

static	int	count_words(const char *s, char c)
{
	int	i;
	int	total_words;

	i = 0;
	total_words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			total_words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (total_words);
}

static	char	*malloc_word(const char *s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc((len + 1) + sizeof(char));
	if (!word)
		return (NULL);
	word[len] = '\0';
	return (word);
}

static	void	copy_word(char *dest, const char *src, char c)
{
	int	i;

	i = 0;
	while (src[i] && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	words = count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	while (j < words)
	{
		while (*s == c)
			s++;
		res[j] = malloc_word(s, c);
		if (!res[j])
			return (NULL);
		copy_word(res[j], s, c);
		s += ft_strlen(res[j]);
		j++;
	}
	res[j] = NULL;
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	const char *s = "apple,, ,banana,orange,,,,";
	char **r = ft_split(s,',');
	int i = 0;
	while (r[i])
	{
		//int j = 0;
		printf("%s\n",r[i]);
		i++;
	}
} */
