/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 21:00:01 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/05 22:16:07 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_bit(unsigned char octet)
{
	int devider;
	devider = 128;
	while (devider > 0)
	{
		if(devider & octet)
			write(1, "1",1);
		else
			write(1, "0",1);
		devider >>= 1;
	}
}

int main()
{
	ft_print_bit(128);
	return 0;
}
