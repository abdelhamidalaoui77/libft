/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:18:10 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/20 20:41:17 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static void	*ft_memcpy(void *dest, const void *src, size_t n)
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
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	const char *src = "Hello, ahmed akala tofa7atan";
	char	dst[28];
	memcpy(dst, src, 20);
	printf("%s\n",dst);
	printf("%zu\n",sizeof(src));	
} */
