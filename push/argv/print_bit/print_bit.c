/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 17:22:31 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/05 19:40:32 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bit(unsigned char octal)
{
	int divider;
	int	tab[8];
	int i;

	divider = 128;
	i = 0;
	while (i < 8)
	{
		tab[i] = octal / divider;
		octal %= divider;
		divider /= 2;
		i++;
	}
	i = 0;
	while (i < 8)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	print_bit2(unsigned char octal)
{
	int divider;
	divider = 128;
	while(octal >= 0)
	{
		if (octal / divider)
		{
			write(1,"1",1);
			octal %= divider;
		}
		else
			write(1,"0",1);
		divider /=2;
	}
}

void	print_bit3(unsigned char octal)
{
	int divider;
	divider = 128;
	while(divider > 0)
	{
		if (divider & octal)
			write(1,"1",1);
		else
			write(1,"0",1);
		divider >>= 1;
	}
}

int main()
{
	print_bit3(128);
	return (0);
}
