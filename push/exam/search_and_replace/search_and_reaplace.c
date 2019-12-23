/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_reaplace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 15:15:43 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/07 15:30:55 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c,1);
}

int main (int ac,char **av)
{
	int i = 1;
	int j = 0;
	if (ac == 4)
	{
		while (av[1][j] && av[2][1] == '\0' && av[3][1] == '\0')
		{
			if(av[1][j] == av[2][0])
				ft_putchar(av[3][0]);
			else
				ft_putchar(av[1][j]);
			j++;
		}
	}
}
