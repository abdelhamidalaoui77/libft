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
#include "libft.h"

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
		if ((unsigned char)s_copy[i] == (unsigned char)c)
			return ((void *)&s_copy[i]);
		i++;
	}
	return (NULL);
}
