/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:01:47 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/26 15:10:22 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
/*

#include <stdio.h>
int     main()
{
        int n = open("file.txt", O_CREAT | O_WRONLY | O_TRUNC, 0755);
        if (n == -1){
                perror("open failed");
                return 1;
        }
        printf("%d\n",n);
        char *str = "Hello world, i am bored the 
	classico is about to begin!!!\n";
        ft_putendl_fd(str,n);
        close(n);
} */
