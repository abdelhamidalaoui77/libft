/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelhamid <abdelhamid@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:32:42 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/07 07:00:40 by abdelhamid       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
/*
#include <stdio.h>

void	to_upper_odd(unsigned int i, char *c)
{
	if (i % 2 != 0 && *c >= 'a' && *c <= 'z')
		*c -= 32;
}

int	main(void)
{
	char str[] = "abcdef";
	ft_striteri(str, to_upper_odd);
	printf("%s\n", str); // Output: aBcDeF
}*/
// void	ft_striteri(char *s, void (*f)(unsigned int, char*))
// {
// 	unsigned int	i;

// 	if (!s || !f)
// 		return ;
// 	i = 0;
// 	while (s[i])
// 	{
// 		f(i, &s[i]);
// 		i++;
// 	}
// }
