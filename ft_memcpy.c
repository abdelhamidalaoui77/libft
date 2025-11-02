/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:18:10 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/20 21:59:36 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	char				*d;
	size_t				i;

	if (!dest || !src)
		return (NULL);
	s = (unsigned const char *)src;
	d = (char *)dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char dest[10] = "hello";
	printf("%s\n",ft_memcpy(dest, NULL, 0));
	printf("%s\n",memcpy(dest, NULL, 0));
} 

