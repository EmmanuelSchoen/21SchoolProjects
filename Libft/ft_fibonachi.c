/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonachi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 00:13:50 by aschimme          #+#    #+#             */
/*   Updated: 2018/12/17 00:16:02 by aschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_fibonachi(int val)
{
	if (val < 0)
		return (-1);
	else if (val == 0)
		return (0);
	else if (val == 1)
		return (1);
	else
		return (ft_fibonachi(val - 2) + ft_fibonachi(val - 1));
}
