/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:43:23 by pahernan          #+#    #+#             */
/*   Updated: 2024/10/07 12:49:54 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*int main(void)
{
	printf("%d \n", ft_str_is_printable("AAA"));
	printf("%d \n", ft_str_is_printable("asdfḱ"));
	printf("%d\n", ft_str_is_printable(""));
	return(0);
}*/