/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:22:39 by pahernan          #+#    #+#             */
/*   Updated: 2024/10/15 13:36:58 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (a > 1)
	{
		a--;
		nb = nb * a;
	}
	return (nb);
}
/*#include <stdio.h>
int main(void)
{
    printf("%d", ft_iterative_factorial(-4));
    return(0);
}*/