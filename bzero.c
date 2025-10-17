/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:14:01 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/17 19:26:16 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char *str;
	size_t i = 9;
	str = malloc(i + 1);
	if (!str)
		return 1;
	ft_bzero(str,i);
	printf("%s",str);
	free(str);
	return 0;
}
