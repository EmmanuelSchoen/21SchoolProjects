/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 21:24:48 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/16 03:56:14 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	i = 0;
	while (i < n && s2[i])
	{
		s1[len] = s2[i];
		i++;
		len++;
	}
	s1[len] = '\0';
	return (s1);
}
