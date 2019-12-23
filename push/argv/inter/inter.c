/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 07:37:47 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/04 07:17:32 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int t;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			t = 0;
			j = 0;
			while (argv[2][j] && t == 0)
			{
				if (argv[1][i] == argv[2][j])
					t = 1;
				j++;
			}
			if (t == 1)
			{
				t = 0;
				j = 0;
				while (j < i && t == 0)
				{
					if (argv[1][i] == argv[1][j])
						t = 1;
					j++;
				}
				if (t == 0)
					ft_putchar(argv[1][i]);
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
