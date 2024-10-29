/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:58:29 by pahernan          #+#    #+#             */
/*   Updated: 2024/10/16 15:54:26 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 1;
	while (j)
	{
		j = 0;
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				j = 1;
			}
			i++;
		}
	}
}
/*#include <stdio.h>
int	main(void)
{
	int	a[] = {3, 4, 6, 7, 1};
	int	size = 5;
	int i = 0;
	ft_sort_int_tab(a, size);
	while (i < size)
	{
		printf ("%d, ", a[i]);
		i ++;
	}
	return 0;
}
*/
