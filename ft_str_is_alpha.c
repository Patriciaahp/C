/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 08:50:00 by pahernan          #+#    #+#             */
/*   Updated: 2024/10/07 16:05:38 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 65 && *str <= 90) && !(*str >= 97 && *str <= 122))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*int main(void)
{
    ft_str_is_alpha("");
	printf("%d \n", ft_str_is_alpha(""));
	printf("%d \n", ft_str_is_alpha("aJjkFG"));
	printf("%d\n", ft_str_is_alpha("cv47h"));
    return(0);
}*/
