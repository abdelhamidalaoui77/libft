/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:30:48 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/19 15:44:10 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	const char *s1 = "Hi Hamid, you're the best!";
	const char *s2 = "Hi hamid, you're the best!";
	size_t x = ft_strncmp(s1,s2,5); 
	printf("%d\n",x);
} */
