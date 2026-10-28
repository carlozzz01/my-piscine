/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmolin <carmolin@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 19:26:49 by carmolin          #+#    #+#             */
/*   Updated: 2026/10/24 19:32:12 by carmolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	o;

	o = nb;
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	while (power-- > 1)
	{
		nb *= o;
	}
	return (nb);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_iterative_power(5, 4));
	return (0);
}
*/
