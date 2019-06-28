/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <emschoen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 20:17:13 by emschoen          #+#    #+#             */
/*   Updated: 2019/06/27 19:54:13 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		if_file_is_valid(int fd, char **line, char **new_str)
{
	if (!**line)
	{
		printf("%s", "1");
		return (-1);
	}
	if (fd == -1)
	{
		printf("%s", "1.2");
		return (-1);
	}
	if (!*new_str)
		if (!(*new_str = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1))))
		{
			printf("%s", "2");
			return (-1);
		}
	return (0);
}

char	*print_new_line(char *new_str, int fd)
{
	char	buf[BUFF_SIZE];
	int		read_ret;

	while ((read_ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
			buf[read_ret] = '\0';
			new_str = ft_strjoin(new_str, buf);
		}
	printf("%s", "3");
	return (new_str);
}

int		get_next_line(const int fd, char **line)
{
	static char		*new_str;
	int				i;

	i = 0;
	if (if_file_is_valid(fd, &new_str, line) == -1)
	{
		printf("%s", "4");
		return (-1);
	}
	if (*new_str)
		ft_strcpy(*line, new_str);
	new_str = print_new_line(new_str, fd);
	if (new_str[i])
	{
		while (new_str[i++] && new_str[i++] != '\n')
			;
		if (i == 0)
			(*line) = ft_strdup("");
		else
		{
			(*line) = ft_strsub(new_str, 0, i);
			new_str = &new_str[i +  1];
		}
		printf("%s", "5");
		return (1);
	}
	else
		(*line) = ft_strdup("");
	return (0);
}