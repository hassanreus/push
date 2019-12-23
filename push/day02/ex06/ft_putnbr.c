/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 01:12:34 by hseffian          #+#    #+#             */
/*   Updated: 2019/02/15 03:08:10 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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
