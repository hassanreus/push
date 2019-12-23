/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 19:26:30 by hseffian          #+#    #+#             */
/*   Updated: 2019/03/06 21:50:34 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int								ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char							*ft_strdup(char *str)
{
	char	*p;
	int		i;

	i = 0;
	while (str[i])
		i++;
	p = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

struct	s_stock_par				*ft_param_to_tab(int ac, char **av)
{
	t_stock_par			*param;
	int					i;

	i = 0;
	if ((param = malloc(sizeof(t_stock_par) * (ac + 1))) == NULL)
		return (NULL);
	while (i < ac)
	{
		param[i].size_param = ft_strlen(av[i]);
		param[i].str = av[i];
		param[i].copy = ft_strdup(av[i]);
		param[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	param[i].str = 0;
	return (param);
}
