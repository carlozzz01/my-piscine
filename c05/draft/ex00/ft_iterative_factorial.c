/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmolin <carmolin@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 18:48:26 by carmolin          #+#    #+#             */
/*   Updated: 2026/10/24 18:58:41 by carmolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	f = nb;
	while (f-- > 1)
		nb *= f;
	return (nb);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}
*/
