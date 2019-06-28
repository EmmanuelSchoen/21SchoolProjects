/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 21:54:28 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/16 04:27:38 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*strsub;
	unsigned int	i;

	i = 0;
	if (!s || !(strsub = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		strsub[i] = s[i + start];
		i++;
	}
	strsub[i] = '\0';
	return (strsub);
}
