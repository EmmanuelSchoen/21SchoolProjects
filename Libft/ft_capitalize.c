/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 00:00:39 by aschimme          #+#    #+#             */
/*   Updated: 2018/12/17 00:26:39 by aschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_capitalize(char *str)
{
	unsigned int	i;

	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z')) &&
			(str[i - 1] < '0' ||
			(str[i - 1] > '9' && str[i - 1] < 'A') ||
			(str[i - 1] > 'Z' && str[i - 1] < 'a') ||
			str[i - 1] > 'z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		++i;
	}
	return (str);
}
