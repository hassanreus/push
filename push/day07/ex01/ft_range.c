/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 03:58:52 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/06 10:34:41 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *f;
	int i;

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
