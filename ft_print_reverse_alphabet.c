/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:04:40 by pahernan          #+#    #+#             */
/*   Updated: 2024/09/27 13:17:29 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 122;
	while (i != 96)
	{
		write(1, &i, 1);
		i--;
	}
}
