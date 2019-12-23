/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 04:32:49 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/08 04:46:56 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*print_w(char *str)
{
	int i;
	i = 0;
	while(str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		write(1 ,&str[i], 1);
		i++;
	}
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	return (str);
}

int		main(int ac , char **av)
{
	if(ac == 2)
	{
		int j;

		j = 0;
		while(av[1][j] != '\0')
		{
			if(av[1][j] != ' ' && av[1][j] != '\t')
			{
				av[1][j] = *print_w(&av[1][j]);
				if(av[1][j] != '\0')
					write(1 , " ", 1);
			}
			else
				j++;
			j++;
		}
	}
	write(1 ,"\n", 1);
	return(0);
}
