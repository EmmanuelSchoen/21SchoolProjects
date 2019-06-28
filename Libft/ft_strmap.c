/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 21:19:14 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/13 22:57:17 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	char	*fresh2;

	if (!s || !f || !(fresh = ft_strnew(ft_strlen(s))))
		return (NULL);
	fresh2 = fresh;
	if (s != NULL)
	{
		while (*s)
			*fresh++ = f(*s++);
		*fresh = '\0';
	}
	return (fresh2);
}
