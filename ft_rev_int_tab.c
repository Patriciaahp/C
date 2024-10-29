/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:56:55 by pahernan          #+#    #+#             */
/*   Updated: 2024/10/16 15:54:20 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*int main(void)
{
	int	a[] = {3, 4, 6, 7, 1, 2};
	int	size = 6;
	int i = 0;
	ft_rev_int_tab(a, size);
	while (i < size)
	{
		printf ("%d, ", a[i]);
		i ++;
	}
	return 0;
}*/