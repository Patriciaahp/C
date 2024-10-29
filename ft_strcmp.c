/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:08:15 by pahernan          #+#    #+#             */
/*   Updated: 2024/10/10 13:08:52 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (!(*s1 == *s2))
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
/*int	main(void)
{
   
   
	char *a = "gato";

	char *b = "gato";


	printf("%d \n",  ft_strcmp(a, b));
    return(0);
}*/