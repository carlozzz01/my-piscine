/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmolin <carmolin@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 19:35:33 by carmolin          #+#    #+#             */
/*   Updated: 2026/10/24 20:25:36 by carmolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	o;

	o = nb;
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (power > 1)
		nb = ft_recursive_power(nb, power - 1);
	return (nb * o);
}

/*
#include <stdio.h>
int main(void)
{
    printf("%d", ft_recursive_power(5, 4));
    return (0);
}
*/
