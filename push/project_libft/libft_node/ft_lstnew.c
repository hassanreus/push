/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 00:09:21 by hseffian          #+#    #+#             */
/*   Updated: 2019/05/09 05:34:46 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list * ft_lstnew(void const *content, size_t content_size)
{
	t_list *tmp;

	if (!(tmp = (t_list *)malloc(sizeof(t_list))))
		return (NULL);

	tmp->next = NULL;

	if (content == NULL)
	{
		tmp -> content = NULL;
		tmp -> content_size = 0;
	}
	else
	{
		tmp->content = ft_strdup(content);
		tmp->content_size = content_size; 
	}
	return (tmp);
}
#include <stdio.h>

int main(void)
{
	char *s = "hello";
	t_list *l = ft_lstnew(s, ft_strlen(s) + 1);
		printf("%s\n",l -> content);
		printf("%lu",l -> content_size);
}
