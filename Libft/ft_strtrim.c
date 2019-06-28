/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 20:53:34 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/21 22:24:49 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strstart(const char *str)
{
	int i;

	i = 0;
	while ((*str == ' ' || *str == '\n' || *str == '\t') && *str)
	{
		i++;
		str++;
	}
	return (i);
}

static int	strend(const char *str)
{
	int i;

	i = 0;
	while (*str)
		str++;
	str--;
	while ((*str == ' ' || *str == '\n' || *str == '\t'))
	{
		i++;
		str--;
	}
	return (i);
}

char		*ft_strtrim(char const *s)
{
	char	*fresh;
	int		i;
	int		j;
	int		n;

	if (!s)
		return (NULL);
	i = strstart(s);
	if ((size_t)i == ft_strlen(s))
		return (ft_strnew(0));
	j = strend(s);
	n = ft_strlen(s) - (i + j);
	if (!(fresh = (char *)malloc(n)))
		return (NULL);
	fresh = ft_strsub(s, i, n);
	return (fresh);
}
