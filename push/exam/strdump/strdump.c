/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdump.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 16:29:35 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/07 16:34:06 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdump(char *src)
{
	int i;
	i = 0;
	while (src[i])
		i++;
	char *t;
	t = (char*)malloc(sizeof(char) * (i + 1));
	while(src[i])
	{
		t[i] = src[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}
