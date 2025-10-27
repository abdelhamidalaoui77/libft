/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:44:21 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/20 22:06:24 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	char				*d;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	s = (unsigned const char *)src;
	d = (char *)dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
} */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	s = (unsigned const char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (d > s)
	{
		while (n--)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return (dest);
}
/*

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	const char *src = "Hello, ahmed akala tofa7atan";
	char	dst[28];
	ft_memmove(dst, src, 28);
	printf("%s\n",dst);
	printf("%zu\n",sizeof(src));
} */
