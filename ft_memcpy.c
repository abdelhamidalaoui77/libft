/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:18:10 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/03 22:24:16 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	if (!dest && !src)
		return (dest);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
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
	char dest[] = "hello";

	char *s = ft_memcpy(dest, NULL, 5);
	char *s3;
	printf("%s\n",s);
	char *s2 = memcpy(dest, s3, 5);
	printf("%s\n",s2);
}*/
