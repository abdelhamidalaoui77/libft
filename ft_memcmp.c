/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:11:09 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/21 18:26:21 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;

	if (n == 0)
		return (0);
	i = 0;
	s1_copy = (unsigned char *)s1;
	s2_copy = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_copy[i] != s2_copy[i])
			return ((int)(s1_copy[i] - s2_copy[i]));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	main()
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "Hellp";
	char str4[] = "HelLo";

	printf("Test 1 (identical):\n");
	printf("memcmp: %d | ft_memcmp: %d\n",
		memcmp(str1, str2, 5), ft_memcmp(str1, str2, 5));

	printf("\nTest 2 (different last char):\n");
	printf("memcmp: %d | ft_memcmp: %d\n",
		memcmp(str1, str3, 5), ft_memcmp(str1, str3, 5));

	printf("\nTest 3 (different case):\n");
	printf("memcmp: %d | ft_memcmp: %d\n",
		memcmp(str1, str4, 5), ft_memcmp(str1, str4, 5));

	printf("\nTest 4 (compare partial):\n");
	printf("memcmp: %d | ft_memcmp: %d\n",
		memcmp(str1, str3, 4), ft_memcmp(str1, str3, 4));

	printf("\nTest 5 (n = 0):\n");
	printf("memcmp: %d | ft_memcmp: %d\n",
		memcmp(str1, str3, 0), ft_memcmp(str1, str3, 0));

	return (0);
}*/
