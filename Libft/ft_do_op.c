/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 18:05:52 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/19 18:06:47 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_do_op(int nbr1, int nbr2, char op)
{
	int	result;

	result = 0;
	if (op == '+')
		result = nbr1 + nbr2;
	else if (op == '-')
		result = nbr1 - nbr2;
	else if (op == '*')
		result = nbr1 * nbr2;
	else if (op == '/')
		result = (nbr2 != 0) ? (nbr1 / nbr2) : result;
	else if (op == '%')
		result = (nbr2 != 0) ? (nbr1 % nbr2) : result;
	return (result);
}
