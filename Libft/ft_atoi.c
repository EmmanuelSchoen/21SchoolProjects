/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 00:37:15 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/19 18:33:41 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		nbisngtv;
	long	result;

	nbisngtv = 1;
	result = 0;
	if (!*str)
		return (0);
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '-')
		nbisngtv = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if (result * 10 + (*str - 48) < 0)
			return (-1 * (nbisngtv == 1));
		else
			(result = result * 10 + (*str - 48));
		str++;
	}
	return (nbisngtv * result);
}
