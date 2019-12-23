/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 04:58:31 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/08 05:56:26 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void		ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putnbr(int nb)
{
	unsigned int nbmr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbmr = nb * -1;
	}
	else
		nbmr = nb;
	if (nbmr >= 10)
		ft_putnbr(nbmr / 10);
	ft_putchar(nbmr % 10 + '0');
}

int	ft_atoi(char *str)
{
	int r;
	int i;
	int sign;

	r = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + str[i] - '0';
		i++;
	}
	return (r * sign);
}

void calcul (int value) 
{
	int i;
	int r;
	i = 1;
	r = 0;
	while(i <= 9)
	{
		r = value + r;
		ft_putnbr(i);
		ft_putchar(' ');
		ft_putchar('X');
		ft_putchar(' ');
		ft_putnbr(value);
		ft_putchar(' ');
		ft_putchar('=');
		ft_putchar(' ');
		ft_putnbr(r);
		ft_putchar('\n');
		i++;
	}
}
int		main(int ac, char **av)
{
	int a;
	if(ac == 2)
	{
		a =ft_atoi(av[1]);

	calcul(a);
	}
	else
	ft_putchar('\n');
}











