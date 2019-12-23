/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 04:39:51 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/06 10:34:14 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*f;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	f = (int*)malloc(sizeof(*f) * (max - min));
	while (min < max)
	{
		f[i] = min;
		min++;
		i++;
	}
	f[i] = '\0';
	return (f);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == 0)
		return (0);
	return (max - min);
}
