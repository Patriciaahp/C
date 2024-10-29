/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:15:33 by pahernan          #+#    #+#             */
/*   Updated: 2024/10/10 13:08:47 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while ((dest[i] != '\0'))
	{
		i++;
	}
	while ((nb > 0) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main(void)
{
    char a[20] = "asd";
    char *b = "gato";
    ft_strncat(a, b, 3);
    printf("%s", a);
    return(0);
}*/