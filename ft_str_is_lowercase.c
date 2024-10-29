/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:25:29 by pahernan          #+#    #+#             */
/*   Updated: 2024/10/07 12:13:51 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 97 && *str <= 122))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*int main(void)
{
	printf("%d \n", ft_str_is_lowercase("aaa"));
	printf("%d \n", ft_str_is_lowercase("aaAOa"));
	printf("%d\n", ft_str_is_lowercase(""));
	return(0);
}*/