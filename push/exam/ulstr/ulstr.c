/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 15:32:11 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/07 15:43:07 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c,1);
}

int main(int ac,char **av)
{
	int j = 0;
	if (ac == 2)
	{
		while (av[1][j])
		{
			if (av[1][j] >= 'A' && av[1][j] <= 'Z')
				av[1][j] = av[1][j] + 32;
			else if (av[1][j] >= 'a' && av[1][j] <= 'z')
				av[1][j] = av[1][j] - 32;
			ft_putchar(av[1][j]);
			j++;
		}
	}
}