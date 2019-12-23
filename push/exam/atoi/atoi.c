/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 16:14:04 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/07 16:29:18 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
int  ft_atoi(const char *str)
{
	int i;
	int sign = 1;
	int r = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
		if(str[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (str[i] == '+')
		{
			i++;
		}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		r = (r *10) + str[i] - '0';
		i++;
	}
	return (r * sign);
}

int main()
{
	printf("%d",ft_atoi("-13-2"));
	printf("   %d",atoi("-13-2"));
}
