/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 17:51:02 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/08 04:57:53 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar (char c)
{
	write(1,&c,1);
}
int main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i--;
		while(av[1][i] != ' ' && av[1][i] != '\t') 
			i--;
		i++;
		while((av[1][i] != ' ' && av[1][i] != '\t') && av[1][i]){
			ft_putchar(av[1][i]);
			i++;
		}
	}
	write(1 ,"\n", 1);
	return (0);
}
