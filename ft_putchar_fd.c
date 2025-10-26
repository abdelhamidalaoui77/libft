/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:30:29 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/26 14:51:31 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <stdio.h>
int	main()
{
	int n = open("file.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (n == -1){
		perror("open failed");
		return 1;
	}
	printf("%d\n",n);
	ft_putchar_fd('D',n);
	close(n);
} */
