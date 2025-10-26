/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:55:16 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/26 11:17:27 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
static	int	count_words(const char *s, char c)
{
	int	i;
	int	total_words;
	int	check_delimter_before;
	int	start_new_word;

	i = 0;
	total_words = 0;
	check_delimter_before = 0;
	start_new_word = 1;
	while (s[i])
	{
		if (s[i] ==  c)
		{
			check_delimter_before = 1;
			start_new_word = 0;
		}

		if (check_delimter_before && s[i] != c)
		{
			check_delimter_before = 0;
			start_new_word = 1;
		}
		if (start_new_word)
		{
			start_new_word = 0;
			total_words += 1;
		}
	}
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

char	**ft_split(char const *s, char c)
{
	
} */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	const char *s = "apple,,,banana,orange";
	char c = ',';
	printf("%d\n",count_words(s,c));
}
