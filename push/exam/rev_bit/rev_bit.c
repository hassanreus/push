/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_bit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 19:16:47 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/07 20:51:34 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char r = 0;
	unsigned len = 8;
	while(len--)
	{
		r= (r << 1) | (octet & 1);
		octet >>= 1;
	}
	return r;
}

int main()
{
	printf("%u",reverse_bits(3));
}
