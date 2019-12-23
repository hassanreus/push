/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:40:09 by hseffian          #+#    #+#             */
/*   Updated: 2019/05/22 00:51:26 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 100

# include "libft/libft.h"
# include <unistd.h>
# include <fcntl.h>

int	get_next_line(const int fd, char **line);

typedef struct	s_list
{
	int nfd;
	char *rest;
	struct s_list *next;
}				t_list;

#endif
