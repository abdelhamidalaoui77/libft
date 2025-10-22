/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:50:34 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/22 12:29:33 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	set_occurrence(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	total_occurrence;

	i = 0;
	total_occurrence = 0;
	while (s1[i])
	{
		
	}
}
char	*ft_strtrim(char const *s1, char const *set)
{
	
}
