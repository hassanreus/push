/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 08:53:10 by hseffian          #+#    #+#             */
/*   Updated: 2019/05/16 02:01:50 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

#include <stdio.h>
t_list *ft_check_node(int fd, t_list *head)
{
	while (head != NULL)
	{
		if (head->nfd == fd)
			return (head);
		head = head->next;
	}
	if (!(head = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	head->nfd = fd;
	head->rest = ft_strnew(0);
	head->next = NULL;
	return (head);
}

int get_next_line(const int fd, char **line)
{
	static t_list *head;
	char buff[BUFF_SIZE + 1];
	char *index;
	t_list *node;
	int r;

	head = ft_check_node(fd, head);
	index = head->rest;
	while ((r = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[r] = '\0';
		index = ft_strjoin(index, buff);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	*line = ft_strsub(index, 0, strcspn(index, "\n"));
	head->rest = ft_strdup(ft_strchr(index, '\n') + 1);
	return (0);
}

int main(int ac, char **av)
{
	int c = 0;
	int fd1;
	int fd2;
	char *line;

	if (ac > 1)
	{
		fd1 = open(av[1], O_RDONLY);
		fd2 = open(av[2], O_RDONLY);

		while (c < 5)
		{
			get_next_line(fd1, &line);
			c++;
			printf("%s\n", line);
		}
		printf("\n\n");
	}	
		c = 0;
		while (c < 5)
		{
			get_next_line(fd2, &line);
			c++;
			printf("%s\n", line);
		}
		printf("\n\n");
		
		c = 0;
		while (c < 5)
		{
			get_next_line(fd1, &line);
			c++;
			printf("%s\n", line);
		}
		printf("\n\n");
	
}
