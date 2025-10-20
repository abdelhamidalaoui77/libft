/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:04:03 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/20 15:43:09 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*s2;
	int		i;

	s2 = (char *)s;
	i = 0;
	while (s2[i])
	{
		if (s2[i] == c)
			return (&s2[i]);
		i++;
	}
	if (c == '\0')
		return (&s2[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char *str = "hello hamid i konw you have it but i despise you";
	char *str2 = strchr(str, '\0');
	printf("%s\n",str2);
}  */
