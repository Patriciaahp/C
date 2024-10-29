/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:44:27 by pahernan          #+#    #+#             */
/*   Updated: 2024/10/15 18:14:30 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb < 1)
		return (0);
	if (nb > 1)
	{
		while (i * i <= nb)
		{
			if (nb % i == 0 && i * i == nb)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
/*#include <stdio.h>
int main(void)
{
    printf("%d", ft_sqrt(322));
    return (0);
}*/