/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srdup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:29:29 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/21 18:41:40 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*duplicate_str;
	int		i;

	duplicate_str = malloc(ft_strlen(s) + 1);
	if (!duplicate_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		duplicate_str[i] = s[i];
		i++;
	}
	duplicate_str[i] = '\0';
	return (duplicate_str);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s);

int	main(void)
{
	char str[] = "Hello 42!";
	char *dup1 = strdup(str);
	char *dup2 = ft_strdup(str);

	printf("Original strdup: %s\n", dup1);
	printf("My ft_strdup:    %s\n", dup2);

	free(dup1);
	free(dup2);
	return (0);
}
*/
