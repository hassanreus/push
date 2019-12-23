/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 01:26:18 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/01 01:35:52 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c,1);
}

int main(int ac , char **av)
{
	int i = ac - 1;
	int j = 0;

	if(ac > 1)
	{
		while(av[i][j] != '\0')
		{
			ft_putchar(av[i][j]);

		j++;
		}
	}
	ft_putchar('\n');
	return (0);
}
