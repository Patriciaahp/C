/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:39:11 by pahernan          #+#    #+#             */
/*   Updated: 2024/10/08 08:57:19 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	char	*newstr;

	newstr = str;
	while (*str != '\0')
	{
		if ((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
	return (newstr);
}
/*int main(void)
{
	char str2[] = "aAA2aa";
	char str[] = "AAA";
	ft_strlowcase(str);
	ft_strlowcase(str2);

	printf("%s \n", str);
	printf("%s \n", str2);
	return(0);
}*/