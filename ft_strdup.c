/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelhamid <abdelhamid@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:29:29 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/09 05:39:33 by abdelhamid       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate_str;
	int		i;

	duplicate_str = malloc((ft_strlen(s) * sizeof(char)) + 1);
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
