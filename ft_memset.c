/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:03:06 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/11 17:03:24 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*new;
	size_t			i;

	new = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		new[i] = c;
		i++;
	}
	return (s);
}
