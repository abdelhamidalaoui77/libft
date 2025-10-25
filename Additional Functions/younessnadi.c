/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   younessnadi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:32:06 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/25 21:41:16 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	fake(const char *s, char c)
{
	int	i;
	int	len;

	len = 0;
	ei = 0;
	while (s[i])
	{
		if (s[i] != c)
		len++;
		i++;
	}
	return(len);
}

int	war(const char	*str, char c)
{
	int	i;
	int	kelma;
	int	lenght;

	kelma = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c && i != 0 && str[i] != '\0' && str[i - 1] != c)
		kelma++;
		i++;
	}
	if (str[i - 1] != c)
		kelma++;
	return (kelma);
}

char	**ft_split(char	const *s, char c)
{
	char	*tab;
	int	i;
	int	total;
	int	m = war(s,c);

	total = fake(s, c);
	tab = malloc((total + 1)(sizeof(char)));
	if (!tab)
		return NULL;
	len = 0;
	while (m < 0)
        {
		len = 0;
                while (s[i] != c)
		{
			i++;
			len++
		}
		i = 0;
		char	*str = malloc(len);
		while (len--)
		{
			str[1]
		}
        }
}
int main()
{
	int j = fake(",youness,hamid",',');
	printf("%d\n",j);
	return (0);
}
