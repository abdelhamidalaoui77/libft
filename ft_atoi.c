/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:23:50 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/09 19:45:44 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sign(const char *nptr, int *sign)
{
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			*sign = -1;
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long	result;
	long	rcheck;
	int		sign;

	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	nptr += check_sign(nptr, &sign);
	result = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		rcheck = result;
		result = result * 10 + (*nptr - 48);
		if (rcheck > result / 10)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		nptr++;
	}
	return ((int)(result * sign));
}
