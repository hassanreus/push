/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 20:55:38 by hseffian          #+#    #+#             */
/*   Updated: 2019/02/14 23:52:24 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_nbmr(int a, int b)
{
	int n;
	int j;

	n = a / 10;
	j = a % 10;
	ft_putchar(n + '0');
	ft_putchar(j + '0');
	ft_putchar(' ');
	n = b / 10;
	j = b % 10;
	ft_putchar(n + '0');
	ft_putchar(j + '0');
	if (!(a == 98 && b == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_nbmr(a, b);
			b++;
		}
		a++;
	}
}
