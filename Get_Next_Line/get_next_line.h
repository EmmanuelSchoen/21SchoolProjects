/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <emschoen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 20:17:35 by emschoen          #+#    #+#             */
/*   Updated: 2019/06/24 08:23:31 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_H_
#define _GET_NEXT_LINE_H_
#define BUFF_SIZE 10000000
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (n--)
		*s1++ = 0;
}

void	*ft_memalloc(size_t size)
{
	char	*buf;

	if (!(buf = (char *)malloc(sizeof(char) * size + 1)))
		return (0);
	ft_bzero(buf, size);
	return (buf);
}

size_t		ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (*s++)
		count++;
	return (count);
}

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*strsub;
	unsigned int	i;

	i = 0;
	if (!s || !(strsub = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	while (i < len)
	{
		strsub[i] = s[i + start];
		i++;
	}
	strsub[i] = '\0';
	return (strsub);
}

char	*ft_strcpy(char *dst, const char *src)
{
	while ((*dst++ = *src++) != '\0')
		;
	*dst = '\0';
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)ft_memalloc(ft_strlen(s1));
	if (!s1 || !s2)
		return (0);
	ft_strcpy(s2, s1);
	return (s2);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*fresh;

	i = ft_strlen(s1) + ft_strlen(s2);
	fresh = (char *)ft_memalloc(i);
	if (!s1 || !s2 || !fresh)
		return (0);
	while (*s1)
		*fresh++ = *s1++;
	while (*s2)
		*fresh++ = *s2++;
	*fresh = '\0';
	return (fresh - i);
}

#endif
