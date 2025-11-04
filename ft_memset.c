/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:07:45 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/02 23:17:15 by alamrani         ###   ########.fr       */
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
/*
#include <stdio.h>
int main()
{
	char a[5];

	ft_memset((char *)&a, 0b01101000, 1);
	ft_memset((char *)&a+1, 0b01100001, 1);
	ft_memset((char *)&a+2, 0b01101101, 1);
	ft_memset((char *)&a+3, 0b01101001, 1);
	ft_memset((char *)&a+4, 0b01100100, 1);
	ft_memset((char *)&a+5, 0b00000000, 1);
	// ft_memset((char *)&a+6, 255, 1);
	// ft_memset((char *)&a+7, 128, 1);
	printf("%s\n",a);
}*/
