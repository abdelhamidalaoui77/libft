/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:35:39 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/08 16:12:37 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	if (size <= dstlen)
		return (srclen + size);
	i = 0;
	while (src[i] && dstlen + i < size - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	srclen = ft_strlen(src);
	dst[dstlen + i] = '\0';
	return (srclen + dstlen);
}
