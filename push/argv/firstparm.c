/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstparm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 03:10:38 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/01 03:33:11 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c,1);
}

int main(int ac , char **av)
{
	int j = 0;

	if(ac == 2)
	{
		while(av[1][j] == ' ' || av[1][j] == '\t')
				j++;
		while(av[1][j] != '\0')
		{
			if(av[1][j] == ' ' || av[1][j] == '\t')
				break ;
			else
				ft_putchar(av[1][j]);
			j++;
		}
	}
	ft_putchar('\n');
	return (0);
}

