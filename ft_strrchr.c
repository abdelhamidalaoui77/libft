/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:46:36 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/20 16:14:57 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s2;
	int		i;

	s2 = (char *)s;
	i = 0;
	while (s2[i])
		i++;
	while (i >= 0)
	{
		if (s2[i] == (unsigned char )c)
			return (&s2[i]);
		i--;
	}
	return (NULL);
}
