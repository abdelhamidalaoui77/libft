/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:11:37 by alamrani          #+#    #+#             */
/*   Updated: 2025/10/26 15:34:49 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	c = nb % 10 + 48;
	write(fd, &c, 1);
}

#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int fd = open("file1.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	int fd2 = open("file2.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	// if (fd == -1)
	// {
	// 	perror("open failed");
	// 	return (1);
	// }
	// ft_putnbr_fd(2147483675, fd);
	// write(fd, "\n", 1);
	// ft_putnbr_fd(0, fd);
	// write(fd, "\n", 1);
	// ft_putnbr_fd(12345, fd);
	// close(fd);
	printf("%d\n%d\n",fd,fd2);
}