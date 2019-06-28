/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 22:38:38 by emschoen          #+#    #+#             */
/*   Updated: 2018/12/10 21:33:23 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display(char *filename)
{
	int		file;
	char	character;

	file = open(filename, O_RDONLY);
	if (file > 0)
	{
		while (read(file, &character, 1))
			write(1, &character, 1);
		close(file);
	}
}

int		main(int ac, char **av)
{
	if (ac <= 1)
		write(1, "File name missing.\n", 19);
	if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	else
		ft_display(av[1]);
	return (0);
}
