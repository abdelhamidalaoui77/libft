/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:35:39 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/19 14:20:27 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <bsd/string.h>
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (dst[i])
		i++;
	k = i;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + k);
}
/*
int	main()
{
	char dst[6] = "hello";
	const char *src = ", world!!abc";
	size_t result =strlcat(dst,src,15);
	printf("%zu\n",result);
	printf("%s\n",dst);
} */
