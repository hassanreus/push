/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 07:19:18 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/01 07:34:36 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c,1);
}

int main(int ac , char **av)
{
	int i = 1;
	int j = 0;

	if(ac == 2)
	{
		while(av[i][j] != '\0')
		{
			if (av[i][j] == 'a')
			{
				ft_putchar('a');
				break ;
			}
			j++;
		}
		
	}
	else
		ft_putchar('a');
	ft_putchar('\n');
	return (0);
}

