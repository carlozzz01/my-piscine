/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmolin <carmolin@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 18:59:36 by carmolin          #+#    #+#             */
/*   Updated: 2026/10/24 19:26:28 by carmolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}

/*
#include <stdio.h>
int main(void)
{
    printf("%d", ft_recursive_factorial(4));
    return (0);
}
*/
