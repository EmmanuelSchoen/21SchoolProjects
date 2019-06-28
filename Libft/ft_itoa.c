/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 21:03:12 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/21 22:07:08 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		size;
	int		neg;
	int		tmp;
	char	*array;

	size = 1;
	neg = 0;
	if (n < 0)
		neg = 1;
	tmp = n;
	while (tmp /= 10)
		size++;
	array = ft_strnew(size + neg);
	if (array == NULL)
		return (NULL);
	if (neg)
		array[0] = '-';
	while (size--)
	{
		array[size + neg] = (neg ? -(n % 10) : (n % 10)) + '0';
		n /= 10;
	}
	return (array);
}
