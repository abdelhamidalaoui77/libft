/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelhamid <abdelhamid@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:57:24 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/07 06:48:33 by abdelhamid       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (malloc(0));
	newstr = (malloc((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!newstr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		newstr[i] = (char)s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		newstr[i] = (char)s2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
int	main()
{
	const char *str = "ana a9wad wa7d";
	const char *btr = " fkora, makaynch li ygad ytnafss m3aya";
	char *strtr = ft_strjoin(str,btr);
	printf("%s\n",strtr);
	return 0;
}  */
