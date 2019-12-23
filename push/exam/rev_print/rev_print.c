/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 14:48:21 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/07 15:14:27 by hseffian         ###   ########.fr       */
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

	if(ac == 2)
	{
		while (av[1][j])
			j++;
		j--;
		while (j >= 0)
		{
			ft_putchar(av[1][j]);
			j--;
		}
	}
	ft_putchar('\n');
}
