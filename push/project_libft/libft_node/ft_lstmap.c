/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 05:09:55 by hseffian          #+#    #+#             */
/*   Updated: 2019/05/09 05:20:53 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *temp;
	temp = NULL;

	if (lst)
	{
		temp = f(lst);
		temp->next = ft_lstmap(lst->next,f);
		return (temp);
	}
	return (temp);
}
