/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:55:48 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/09 19:35:23 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	handle_sub_len(char const *s, unsigned int start, size_t len)
{
	size_t	slen;

	slen = ft_strlen(s);
	if (start > slen)
		return (0);
	if (slen - start < len)
		return (slen - start);
	return (len);
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
