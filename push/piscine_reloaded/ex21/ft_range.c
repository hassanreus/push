/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 19:59:41 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/27 17:11:14 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *c;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	c = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		c[i] = min;
		min++;
		i++;
	}
	c[i] = '\0';
	return (c);
}
