/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_is_dir.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:22:29 by maceccar          #+#    #+#             */
/*   Updated: 2025/02/11 16:22:29 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corekit.h"

t_bool	ft_file_is_dir(char *file)
{
	int	fd;

	fd = open(file, O_DIRECTORY);
	if (fd == -1)
		return (false);
	close(fd);
	return (true);
}
