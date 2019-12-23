/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 04:54:32 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/01 05:09:46 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
int ft_atoi(const char *str)
{
	int i;
	int sign;
	int r;

	r=0;
	i= 0;
	sign = 1;
	while(str[i] <= 32)
		i++;
	if(str[i] == '-'){
		sign = -1;
		i++;
	}
	else if(str[i] == '+')
		i++;

	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		r = (r*10) + str[i] - '0';
		i++;
	}
	return r*sign;
}

int main()
{
	char str[] = "   \n\t123";
	int n = ft_atoi(str);
	int j = atoi(str);
	printf("%d   ",n);
	printf("%d",j);
}
