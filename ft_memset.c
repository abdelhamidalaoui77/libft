/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelhamid <abdelhamid@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:07:45 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/09 04:12:45 by abdelhamid       ###   ########.fr       */
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
#include <string.h>
int	main()
{
	// char str[15];
	// memset(str,0b01100001,1);
	// memset(str+1,0b01100010,1);
	// memset(str+2,0b01100100,1);
	// memset(str+3,0b01100101,1);
	// memset(str+4,0b01101100,1);
	// memset(str+5,0b01101000,1);
	// memset(str+6,0b01100001,1);
	// memset(str+7,0b01101101,1);
	// memset(str+8,0b01101001,1);
	// memset(str+9,0b01100100,1);
	// memset(str+10,0b00000000,1);
	// printf("My name is :%s\n",str);
	// short birthdate;
	// memset((char *)&birthdate,0b11010001,1);
	// memset((char *)&birthdate + 1,0b00000111,1);
	// printf("I born in :%hd\n",birthdate);
	// int	n;
	// memset((char *)&n, 0b00111001,1);
	// memset((char *)&n + 1, 0b00000101,1);
	// printf("I am currently styding in  :%d\n",n);
	// long a;
	// memset((char *)&a,0b11111111,1);
	// memset((char *)&a+1,0b11111111,1);
	// memset((char *)&a+2,0b11111111,1);
	// memset((char *)&a+3,0b11111111,1);
	// memset((char *)&a+4,0b11111111,1);
	// memset((char *)&a+5,0b11111111,1);
	// memset((char *)&a+6,0b11111111,1);
	// memset((char *)&a+7,0b01111111,1);
	// printf("The long max is :%ld\n",a);
}*/