/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:14:01 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/02 23:21:39 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bsd/string.h>

int	main()
{
	// char str[] = "aaaaaaaaabzero";
	// size_t i = 9;
	// char *str = malloc(15 + 1);
	// if (!str)
	// 	return 1;
	// bzero(str,i);
	// printf("%s",str+8);
	// free(str);
	// return 0;
	int i = 257;
	ft_bzero((unsigned char *)&i + 1, 3);
	printf("%d\n", i);
} */
//257 -> 1 ft_bzero
