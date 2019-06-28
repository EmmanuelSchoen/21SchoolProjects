/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 19:41:26 by emschoen          #+#    #+#             */
/*   Updated: 2018/12/07 20:41:09 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char	*src2;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		size++;
	if (!(src2 = malloc(sizeof(char) * (size + 1))))
		return (0);
	i = 0;
	while (src[i])
	{
		src2[i] = src[i];
		i++;
	}
	src2[i] = '\0';
	return (src2);
}
