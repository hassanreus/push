/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 03:20:44 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/08 05:01:32 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}
int main (int ac,char **av)
{
	int i = 0;
	int t = 0;
	int j;
	if (ac == 3)
	{
		while (av[1][i])
		{
			j = 0;
			while (av[1][i] && av[2][j])
			{
				if (av[1][i] == av[2][j] && t == 0)
					t = 1;
				j++;
			}
			if(t == 1)
			{
				t = 0;
				j = 0;
				while(i > j && t == 0){
				if (av[1][i] == av[1][j])
					t = 1;
				j++;}
				if(t == 0)
					ft_putchar(av[1][i]);
			}
			i++;
		}
	}
	write(1,"\n",1);
}
