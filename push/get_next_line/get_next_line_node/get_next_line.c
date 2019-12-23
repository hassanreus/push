/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:39:56 by hseffian          #+#    #+#             */
/*   Updated: 2019/05/22 05:06:33 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
int	ft_free_node(int fd, t_list **head)
{
	t_list *temp;
	t_list *dlt;

	temp = *head;
	while (temp->nfd)
	{
		if (temp->nfd == fd)
		{
			dlt = temp->next;
			free(temp->rest);
			temp->nfd = 0;
			free(temp);
			temp = NULL;
			temp = dlt;
			break ;
		}
		temp = temp->next;
	}
	if (*head != NULL)
	{
		printf("fd: %s\n", (*head)->rest);
	}
	return (0);
}

t_list	*ft_add_node(int fd, t_list *head)
{
	t_list *temp;
	t_list *new;

	temp = head;
	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->nfd = fd;
	new->rest = ft_strnew(0);
	new->next = NULL;
	if (!head)
		return (new);
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}

t_list	*ft_check_node(int fd, t_list *head)
{
	t_list *temp;

	temp = head;
	while (temp != NULL)
	{
		if (temp->nfd == fd)
			return (temp);
		temp = temp->next;
	}
	return (ft_add_node(fd, head));
}

char	*ft_check_file(int fd, char *str)
{
	char	*tmp;
	int		r;
	char	buff[BUFF_SIZE + 1];

	while ((r = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[r] = '\0';
		tmp = str;
		str = ft_strjoin(str, buff);
		free(tmp);
		if (ft_strchr(str, '\n'))
			break ;
	}
	return (str);
}

int	get_next_line(const int fd, char **line)
{
	static	t_list	*head;
	t_list			*temp;
	int				i;
	char			*tmp;
	char			buff[BUFF_SIZE + 1];

	i = 0;
	if (head == NULL)
		head = ft_add_node(fd, head);
	temp = ft_check_node(fd, head);
	if (fd < 0 || read(fd, buff, 0) < 0 || line == NULL)
		return (-1);
	temp->rest = ft_check_file(fd, temp->rest);
	while (temp->rest[i] && temp->rest[i] != '\n')
		i++;
	if (temp->rest[0])
	{
		*line = ft_strsub(temp->rest, 0, i);
		i = temp->rest[i] == '\n' ? i + 1 : i;
		tmp = temp->rest;
		temp->rest = ft_strdup(&temp->rest[i]);
		free(tmp);
		return (1);
	}
	return (ft_free_node(fd, &head));
}

#include <stdio.h>
int     main(int ac, char **av)
{
	int fd;
	char *line;

	fd = open("get_next_line.c", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("still reading\n");
	}
}

/*
   printf("\n\n");
   c = 0;
   while (c < 5)
   {
   get_next_line(fd2, &line);
   c++;
   printf("%s\n",line);
   free(line);
   }
   printf("\n\n");
   c = 0;
   while (c < 5)
   {
   get_next_line(fd3, &line);
   c++;
   printf("%s\n",line);
   free(line);
   }
   printf("\n\n");
   }
   }
   }
   */
