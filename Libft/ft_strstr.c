/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 21:50:13 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/16 03:52:47 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	len_hstk;
	size_t	len_ndle;
	size_t	i;

	len_hstk = ft_strlen(haystack);
	len_ndle = ft_strlen(needle);
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len_hstk < len_ndle)
		return (NULL);
	while (i <= len_hstk - len_ndle)
	{
		if (ft_memcmp(&haystack[i], &needle[0], len_ndle) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
