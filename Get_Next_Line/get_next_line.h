/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <emschoen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 20:17:35 by emschoen          #+#    #+#             */
/*   Updated: 2019/06/24 08:23:31 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_H_
#define _GET_NEXT_LINE_H_
#define BUFF_SIZE 10000000
#include "libft.h"
#include <fcntl.h>

int		get_next_line(const int fd, char **line);


#endif
