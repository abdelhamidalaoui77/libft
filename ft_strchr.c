/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:04:03 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/20 15:56:09 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*s2;
	int				i;
	unsigned char	v;

	v = (unsigned char)c;
	s2 = (char *)s;
	i = 0;
	while (s2[i])
	{
		if (s2[i] == v)
			return (s2 + i);
		i++;
	}
	if (v == '\0')
		return (s2 + i);
	return (NULL);
}
