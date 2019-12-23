/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 01:41:31 by hseffian          #+#    #+#             */
/*   Updated: 2019/02/25 06:40:37 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	r;
	int				i;

	r = 1;
	i = 2;
	if (nb < 0 || nb > 12)
		return (0);
	while (i <= nb)
	{
		r = r * i;
		i++;
	}
	return (r);
}
