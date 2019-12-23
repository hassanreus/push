/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 17:16:16 by hseffian          #+#    #+#             */
/*   Updated: 2019/02/21 20:52:00 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour > 0 && hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	else if (hour == 11)
		printf("%d.00 A.M. AND %d.00 P.M.\n", hour, hour + 1);
	else if (hour > 12 && hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour % 12, hour % 12 + 1);
	else if (hour == 23)
		printf("%d.00 P.M. AND %d.00 A.M.\n", hour % 12, hour % 12 + 1);
	else if (hour == 12)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour, hour % 12 + 1);
	else if (hour == 00)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour + 12, hour + 1);
}
