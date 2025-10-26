/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:07:45 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/19 14:17:33 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*new;
	size_t			i;

	new = (char *)s;
	i = 0;
	while (i < n)
	{
		new[i] = c;
		i++;
	}
	return (s);
}
/*
int main()
{
	int a;
	void *y = &a;
	ft_memset(y,57,1);
	ft_memset(y,5,1);
	ft_memset(y,0,0);
	ft_memset(y,0,0);
	printf("%s",(char*)y);
} */
