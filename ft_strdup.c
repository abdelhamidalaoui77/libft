/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srdup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:29:29 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/21 18:41:40 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate_str;
	int		i;

	duplicate_str = malloc(ft_strlen(s) + 1);
	if (!duplicate_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		duplicate_str[i] = s[i];
		i++;
	}
	duplicate_str[i] = '\0';
	return (duplicate_str);
}
