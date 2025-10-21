/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:16:17 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/21 18:10:13 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_copy;

	if (!s)
		return (NULL);
	s_copy = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_copy[i] == (unsigned char)c)
			return ((void *)&s_copy[i]);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <bsd/string.h>
#include <stdio.h>

int	main()
{
	//const char *str = "abcdeftghijklmnopqrstuvwxyz";
	//int n = 'p';
	//char *result= memchr(str,n,22);
	//printf("%s\n",result);
	char str[] = "abc\0def";
	char *res1 = memchr(str, 'd', 7);
	char *res2 = ft_memchr(str, 'd', 7);
	printf("Original: %s\n", res1);
 	printf("Mine:     %s\n", res2);
} */
