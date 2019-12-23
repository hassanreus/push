/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 16:37:14 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/07 17:48:55 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c,1);
}
int		main(int ac, char **av)
{
	int i;
	int j;
	int t;
	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			t = 0;
			j = 0;
			while (av[2][j] && t == 0){
				if (av[1][i] == av[2][j])
				t = 1;
			j++;}
			if (t == 1)
			{
				t = 0;
				j = 0;
				while (i > j && t == 0)
				{
					if (av[1][i] == av[1][j])
						t = 1;
					j++;
				}
				if (t == 0)
					ft_putchar(av[1][i]);
			}
			i++;
		}
	}
}
