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

	if (!s1 || !s2 || n == 0)
		return (0);
	i = 0;
	s1_copy = (unsigned char *)s1;
	s2_copy = (unsigned char *)s2;
	while (i < n)
	{
		if ((unsigned char)s1_copy[i] != (unsigned char)s2_copy[i])
			return ((unsigned char)s1_copy[i] - (unsigned char)s2_copy[i]);
		i++;
	}
	return (0);
}
