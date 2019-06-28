/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 21:09:24 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/13 21:13:20 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*fresh;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	if (!(fresh = (char *)malloc(i + 1)))
		return (NULL);
	while (*s1)
	{
		*fresh = *s1;
		s1++;
		fresh++;
	}
	while (*s2)
		*fresh++ = *s2++;
	*fresh = '\0';
	return (fresh - i);
}
