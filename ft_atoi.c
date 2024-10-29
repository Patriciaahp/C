/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 08:18:23 by pahernan          #+#    #+#             */
/*   Updated: 2024/10/15 11:48:41 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	j = 0;
	res = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while ((str[i]) && (str[i] >= '0' && str[i] <= '9'))
	{
		res = str[i] - '0' + res * 10;
		i++;
	}
	if (j % 2 != 0)
		res = -res;
	return (res);
}
/*#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
printf("%d\n", ft_atoi("\t \n ---+--+1234ab567"));
printf("%d\n", atoi("  \t \n    	-1234ab567"));
	return (0);
}*/