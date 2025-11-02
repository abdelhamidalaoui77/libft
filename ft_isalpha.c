/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:47:24 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/01 16:44:50 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	return (0);
}
#include <ctype.h>
#include <stdio.h>
int	main()
{
	char c = 'c';
	printf("%d\n",ft_isalpha(c));
	printf("%d",isalpha(c));
	return 0;
}
