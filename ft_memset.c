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
	int a;

	ft_memset((char *)&a, 57, 1);
	ft_memset((char *)&a+1, 5, 1);
	
	printf("%d\n",a);
}*/
