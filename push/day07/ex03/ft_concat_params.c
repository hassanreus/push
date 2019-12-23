/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 14:59:06 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/06 10:32:14 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_concat_params(int argc, char **argv)
{
	int			i;
	int			j;
	int			x;
	char		*a;

	i = 1;
	x = -1;
	a = (char*)malloc(argc * sizeof(*a));
	while (i < argc)
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				a[++x] = argv[i][j];
				j++;
			}
			if (i + 1 < argc)
				a[++x] = '\n';
			i++;
		}
	}
	a[x + 1] = '\0';
	return (a);
}
