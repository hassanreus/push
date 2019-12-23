/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_cap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 05:57:52 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/08 06:11:47 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    to_lower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

void    to_upper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

int     is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\0');
}

int main(int ac,char **av)
{
	int i = 1;
	int j;
	if (i < ac)
	{
		j = 0;
		to_upper(&av[i][j]);
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				write(1,&av[i][j],1);
				j++;
			}
			i++;
		}
	}
}
