/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 13:52:37 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/07 14:13:19 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c,1);
}

int main (int ac, char **av)
{
	int i;
	int j;
	i = ac - 1;
	j = 0;
	if (ac > 1)
	{
		while(av[i][j] != '\0')
		{
			write(1 ,&av[i][j], 1);
			j++;
		}
	}
	write (1 ,"\n", 1);
}
