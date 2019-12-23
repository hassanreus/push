/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 21:44:27 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/08 02:00:22 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int len (char *str)
{
	int i =0;
	while(str[i])
	{
		i++;
	}

	return i;
}


char ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return str[i];
}

int one_is_in_two (char *s1 , char *s2)
{
	while(*s2)
	{
		if(*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else 
			s2++;
	}
		if(*s1 == '\0')
		return (1);
		return 0;
	
}

int main(int ac, char **av)
{
	int i;
	i = 0;
	if (ac ==  3)
	{
		if(one_is_in_two(av[1],av[2]))
			write(1,av[1],len(av[1]));
	}
	write(1,"\n",1);
}
