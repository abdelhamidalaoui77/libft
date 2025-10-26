/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:55:48 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/22 11:49:50 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	handle_sub_len(char const *s, unsigned int start, size_t len)
{
	size_t	substrlen;
	size_t	subsize;
	size_t	retrnsize;

	substrlen = ft_strlen(s);
	subsize = substrlen - start;
	if (subsize > len)
		return (retrnsize = subsize -(subsize - len));
	else
		return (subsize);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newsubstr;
	size_t	i;
	size_t	substrlen;

	if (!s || start == 0 || len == 0)
		return (malloc(0));
	substrlen = handle_sub_len(s, start, len);
	newsubstr = malloc(substrlen + 1);
	if (!newsubstr)
		return (NULL);
	i = 0;
	while (s[start] && i < substrlen)
	{
		newsubstr[i] = s[start];
		i++;
		start++;
	}
	newsubstr[i] = '\0';
	return (newsubstr);
}
/*
int	main()
{
	char *s = "Hi, this is a substract string, here is the start 
	of the substract until here this will be ignored";
	unsigned int start = 31;
	size_t size = 46;
	char *ns = ft_substr(s, start, size);
	printf("the subtract string is :%s\n",ns);
}*/
