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
	char	*s2;
	int		i;

	s2 = (char *)s;
	i = 0;
	while (s2[i])
	{
		if (s2[i] == c)
			return ((char *)&s2[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s2[i]);
	return (NULL);
}
