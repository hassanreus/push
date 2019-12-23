/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 14:20:44 by hseffian          #+#    #+#             */
/*   Updated: 2019/02/22 14:44:56 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int m;

	i = 0;
	while (i < length)
	{
		j = 0;
		m = 0;
		while (j < length)
		{
			if (tab[i] == tab[j])
				m++;
			j++;
		}
		if (m % 2 == 1)
			return (tab[i]);
		i++;
	}
	return (0);
}
