/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 08:23:58 by pahernan          #+#    #+#             */
/*   Updated: 2024/10/17 08:36:49 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while ((dest[i] != '\0'))
		i++;
	while (src[j] != '\0')
		j++;
	if (size <= j)
		return (i + j);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}
/*#include <stdio.h>
int main(void)
{
    char a[20] = "as";
    char *b = "gato";
	printf("%d\n", ft_strlcat(a, b, 8));
    printf("%s", a);
    return(0);
}*/