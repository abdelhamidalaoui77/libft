/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 23:11:34 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/18 13:30:09 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (src == 0 || dst == 0)
		return (0);
	i = 0;
	if (src > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}
/*
int	main()
{
	char dst[27];
	const char src[] = "abcdefghijklmnopqrstuvwxyz";
	size_t len = strlcpy(dst, src, 27);
	printf("%zu\n",sizeof(src));
	printf("%s\n",dst);
	printf("%zu",len);
} */
