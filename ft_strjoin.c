/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:06:15 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/11 17:06:19 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	len;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	newstr = (malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!newstr)
		return (NULL);
	len = ft_strlen(s1);
	ft_memcpy(newstr, s1, len);
	i = 0;
	while (s2[i])
	{
		newstr[len + i] = (char)s2[i];
		i++;
	}
	newstr[len + i] = '\0';
	return (newstr);
}
