/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:52:28 by pahernan          #+#    #+#             */
/*   Updated: 2024/10/08 08:56:49 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	char	*newstr;

	newstr = str;
	while (*str != '\0')
	{
		if ((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
	return (newstr);
}
/*int main(void)
{
	char str2[] = "aAA2aa";
	char str[] = "aaa";
	ft_strupcase(str);
	ft_strupcase(str2);

	printf("%s \n", str);
	printf("%s \n", str2);
	return(0);
}*/