/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 05:01:27 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/08 06:27:45 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (argv[1][i])
	{
		if(argv[1][i] == '\t')
			argv[1][i] = ' ';
		i++;
	}
	i = 0;
	while (argv[1][i] == ' ' && argv[1][i])
	i++;
	while (argv[1][i])
	{
		while (argv[1][i] == ' ' && argv[1][i])
			i++;
		write(1 ," ", 1);
		while (argv[1][i] != ' '  && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
