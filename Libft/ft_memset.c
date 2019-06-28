/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 05:09:31 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/13 23:11:49 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*str;
	unsigned char	a;
	int				i;

	i = len;
	a = (unsigned char)c;
	str = (char *)b;
	while (len)
	{
		*str = a;
		str++;
		len--;
	}
	return (b);
}
