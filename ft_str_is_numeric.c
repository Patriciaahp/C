/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:32:22 by pahernan          #+#    #+#             */
/*   Updated: 2024/10/07 12:09:10 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 48 && *str <= 57))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*int main(void)
{
	printf("%d \n", ft_str_is_numeric("1234"));
	printf("%d \n", ft_str_is_numeric("1asd"));
	printf("%d\n", ft_str_is_numeric(""));
    return(0);
}*/
