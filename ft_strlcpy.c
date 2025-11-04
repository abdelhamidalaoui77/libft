/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 23:11:34 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/03 22:41:28 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main()
{
	char dst[27];
	const char src[] = "abcdefghijklmnopqrstuvwxyz";
	size_t len =strlcpy(dst, src, 27);
	printf("%zu\n",sizeof(src));
	printf("%s\n",dst);
	printf("%zu",len);
}*/
