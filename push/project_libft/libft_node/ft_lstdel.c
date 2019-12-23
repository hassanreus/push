/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 03:44:15 by hseffian          #+#    #+#             */
/*   Updated: 2019/05/09 04:44:31 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *current;
	t_list *n;

	current = *alst;
	while (current != NULL)
	{
		n = current->next;
		del(current->content, current->content_size);
		free(current);
		current = n;
	}
	*alst = NULL;
}
