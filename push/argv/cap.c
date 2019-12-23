/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cap.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 02:28:51 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/01 02:40:12 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
		write(1, &c,1);
}

int main(int ac , char **av)
{
	int j ;
    j = 0;
	if ( ac == 2)
	{
		while ( av[1][j] != '\0')
		{
			if ( av[1][j] >= 'a' && av[1][j] <= 'm' )
				av[1][j] = av[1][j] + 13;
			else if ( av[1][j] >= 'n' && av[1][j] <= 'z')
			    av[1][j] = av[1][j] - 13;
            
		    ft_putchar(av[1][j]);
		j++;	
		}
	}

	ft_putchar('\n');
	return 0;
}
