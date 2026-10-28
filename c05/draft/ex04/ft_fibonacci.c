/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmolin <carmolin@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 00:37:52 by carmolin          #+#    #+#             */
/*   Updated: 2026/10/28 00:52:18 by carmolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);	
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>
int main(void)
{
		printf("f0: %d\n", ft_fibonacci(0));
		printf("f1: %d\n", ft_fibonacci(1));
		printf("f2: %d\n", ft_fibonacci(2));
		printf("f3: %d\n", ft_fibonacci(3));
		printf("f4: %d\n", ft_fibonacci(4));
		printf("f5: %d\n", ft_fibonacci(5));
		printf("f6: %d\n", ft_fibonacci(6));
		printf("f7: %d\n", ft_fibonacci(7));
		printf("f8: %d\n", ft_fibonacci(8));
		printf("f9: %d\n", ft_fibonacci(9));
}
*/
