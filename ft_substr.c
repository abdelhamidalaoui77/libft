/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:55:48 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/03 22:25:53 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	handle_sub_len(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	subsize;

	slen = ft_strlen(s);
	subsize = slen - start;
	if (subsize > len)
		return (subsize -(subsize - len));
	else
		return (subsize);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newsubstr;
	size_t	i;
	size_t	substrlen;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
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
#include <stdio.h>
int	main()
{
	char *s = "hello world";
	unsigned int start = 1;
	size_t size = 0;
	char *ns = ft_substr(NULL, start, 0);
	printf("%s\n",ns);
	//printf("%s\n",ft_substr("Bonjour comment ca va?", 5, 8));
	free(ns);
}
