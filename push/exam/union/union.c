/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 01:00:27 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/08 04:05:20 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_un(char *str1, char *str2)
{
	int i = 0;
	char str_un[4096];

	while(str1[i])
	{
		if (!str_un[str1[i]])
		{
			str_un[str1[i]] = 1;
			write (1, &str1[i], 1);
		}
		i += 1;
	}
	i = 0;
	while(str2[i])
	{
		if (!str_un[str2[i]])
		{
			str_un[str2[i]] = 1;
			write (1, &str2[i], 1);
		}
		i += 1;
	}
}

int main (int argc,char **argv)
{
	if (argc == 3)
		ft_un(argv[1],argv[2]);
	write(1,"\n",1);
	return (0);
}
