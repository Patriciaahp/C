/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:30:30 by pahernan          #+#    #+#             */
/*   Updated: 2024/10/07 12:34:49 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 65 && *str <= 90))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*int main(void)
{
	printf("%d \n", ft_str_is_uppercase("AAA"));
	printf("%d \n", ft_str_is_uppercase("AAAaaA"));
	printf("%d\n", ft_str_is_uppercase(""));
	return(0);
}*/