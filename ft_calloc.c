/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:42:11 by alamrani          #+#    #+#             */
/*   Updated: 2025/11/01 13:30:44 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#ifndef SIZE_MAX
# define SIZE_MAX ((size_t) - 1)
#endif 

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size != 0 && nmemb > SIZE_MAX / size) // sizemax + 5 
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
/*
static void print_memory(const void *ptr, size_t size)
{
    const unsigned char *p = ptr;
    for (size_t i = 0; i < size; i++)
        printf("%02X ", p[i]);
    printf("\n");
}

int main(void)
{
    // --- Test 1: Normal allocation ---
    printf("=== Test 1: Normal allocation ===\n");
    char *sys = calloc(5, sizeof(char));
    char *mine = ft_calloc(5, sizeof(char));
    if (sys && mine)
    {
        printf("System calloc memory: ");
        print_memory(sys, 5);
        printf("ft_calloc memory:     ");
        print_memory(mine, 5);
    }
    free(sys);
    free(mine);
    // --- Test 2: Zero arguments ---
    printf("\n=== Test 2: Zero arguments ===\n");
    sys = calloc(0, 10);
    mine = ft_calloc(0, 10);
    printf("System calloc(0, 10): %p\n", (void *)sys);
    printf("ft_calloc(0, 10):     %p\n", (void *)mine);
    free(sys);
    free(mine);
    // --- Test 3: Overflow protection ---
    printf("\n=== Test 3: Overflow protection ===\n");
    sys = calloc(SIZE_MAX, 2);
    mine = ft_calloc(SIZE_MAX, 2);
    printf("System calloc(SIZE_MAX, 2): %p\n", (void *)sys);
    printf("ft_calloc(SIZE_MAX, 2):     %p\n", (void *)mine);
    free(sys);
    free(mine);

    // --- Test 4: Larger allocation ---
    printf("\n=== Test 4: Larger allocation ===\n");
    sys = calloc(10, sizeof(int));
    mine = ft_calloc(10, sizeof(int));
    if (sys && mine)
    {
        printf("System calloc memory: ");
        print_memory(sys, 10 * sizeof(int));
        printf("ft_calloc memory:     ");
        print_memory(mine, 10 * sizeof(int));
    }
    free(sys);
    free(mine);

    return (0);
}*/
