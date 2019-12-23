/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 14:28:33 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/07 14:47:53 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c,1);
}

int main(int ac, char **av)
{
	int i;
	int j;
	int b;
	i = 1;
	if (ac == 2)
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
					b = av[i][j] - 'a' + 1;
				else if (av[i][j] >= 'A' && av[i][j] <= 'Z')
					b  = av[i][j] - 'A' + 1;
				else
					ft_putchar(av[i][j]);
				while (b > 0)
				{
					ft_putchar(av[i][j]);
					b--;
				}
				j++;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
