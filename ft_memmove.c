/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:44:21 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/03 22:22:00 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (NULL);
	s = (unsigned const char *)src;
	d = (unsigned char *)dest;
	if (d > s)
	{
		while (n--)
		{
			d[n] = s[n];
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
	char src[]="hello 1337";
	// printf("%s\n", ft_memmove(src+2, src, 4));
	printf("%s\n", memmove(src+2, src, 4));
} */
