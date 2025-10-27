/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:46:36 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/20 16:14:57 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s2;
	int		i;
	int		last_index_occurrence;

	s2 = (char *)s;
	i = 0;
	last_index_occurrence = -1;
	while (s2[i] != '\0')
	{
		if (s2[i] == (char )c)
			last_index_occurrence = i;
		i++;
	}
	if (c == '\0')
		return (&s2[i]);
	if (last_index_occurrence >= 0)
		return (&s2[last_index_occurrence]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	const	char *str = "zHello hamid i konw you have it but i despise you";
	char *str2 = strrchr(str, 'z');
	printf("%s\n",str2);
} */
