/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:23:50 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/03 22:26:38 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	check_overflow(unsigned long result, int sign, char next_digit)
{
	if (result * 10 > (unsigned long)LONG_MAX)
	{
		if (sign == 1)
			return (-1);
		else
			return (0);
	}
	if (result == (unsigned long)LONG_MAX / 10
		&& (next_digit - '0') > (LONG_MAX % 10))
	{
		if (sign == 1)
			return (-1);
		else
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *nptr)
{
	unsigned long	result;
	int				sign;
	int				i;
	int				check;

	i = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	result = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		check = check_overflow(result, sign, nptr[i]);
		if (check != 1)
			return (check);
		result = result * 10 + (nptr[i] - 48);
		i++;
	}
	return ((int)(result * sign));
}
/*
// #include <stdlib.h>
// #include <stdio.h>

// int	main()
// {
// 	printf("%d\n", ft_atoi("-9223372036854775809"));
// 	printf("%d\n",atoi("-9223372036854775809"));
// } 
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("ft_atoi: %d\n", ft_atoi("9223372036854775809"));
	printf("atoi:    %d\n", atoi("9223372036854775809"));
	printf("ft_atoi: %d\n", ft_atoi("-9223372036854775809"));
	printf("atoi:    %d\n", atoi("-9223372036854775809"));
	printf("ft_atoi: %d\n", ft_atoi("+-42abc"));
	printf("atoi:    %d\n", atoi("+-42abc"));
}*/
