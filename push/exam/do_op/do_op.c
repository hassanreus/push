/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 18:33:28 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/07 19:05:50 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
int calcul (int a,char b ,int c)
{
	int x = 0;
	if (b == '+')
		x = a + c;
	if (b == '-')
		x = a - c;
	if (b == '*')
		x = a * c;
	if (b == '/')
	{
		if(b != 0)
			x = a / c;
		else
			exit (1);
	}
	if (b == '%')
	{
		if(b != 0)
			x = a % c;
		else
			exit (1);
	}
	return x;
}

int main (int ac ,char **av)
{
	int a= atoi(av[1]);
	int b= atoi(av[3]);
	if(ac == 4 && av[2][1] == '\0')
	{
		printf("%d",calcul(a,*av[2],b));
	}
	printf("\n");
	return (0);
}
