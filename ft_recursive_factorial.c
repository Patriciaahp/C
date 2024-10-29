/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:38:15 by pahernan          #+#    #+#             */
/*   Updated: 2024/10/15 13:54:21 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1)
	{
		nb = nb * ft_recursive_factorial(nb -1);
	}
	return (nb);
}
/*#include <stdio.h>
int main(void)
{
    printf("%d", ft_recursive_factorial(5));
    return(0);
}*/