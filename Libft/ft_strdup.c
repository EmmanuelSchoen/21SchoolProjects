/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 20:58:52 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/17 07:23:02 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	if (!(s2 = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	while (*s1)
	{
		*s2 = *s1;
		s2++;
		s1++;
	}
	*s2 = *s1;
	return (s2 - i);
}
