/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 01:12:40 by hseffian          #+#    #+#             */
/*   Updated: 2019/02/22 02:05:47 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if (i > j)
	{
		if (j > k)
			return (j);
		else if (k > j)
			return (k);
		else
			return (i);
	}
	else
	{
		if (j < k)
			return (j);
		else if (k < i)
			return (i);
		else
			return (k);
	}
	return (0);
}
