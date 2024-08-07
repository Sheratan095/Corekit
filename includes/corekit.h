/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corekit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:40:17 by maceccar          #+#    #+#             */
/*   Updated: 2024/08/08 00:37:28 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COREKIT_H
# define COREKIT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include <sys/time.h>

# include "stack.h"
# include "libft.h"

//Not including ft_printf.h and get_next_line.h because i don't want to
//	inlcude also their help functions, so i just use their prototype

typedef enum e_bool
{
	false,
	true
}	t_bool;

int		ft_printf(const char *format, ...);

char	*get_next_line(int fd, t_bool last_call);

char	*ft_strjoin_free_s1(char *s1, char *s2);

t_bool	ft_is_string_numeric(const char *str);

int		ft_get_absolute(int number);

//MATIRX

char	**ft_duplicate_char_matrix(const char **matrix);

void	ft_print_char_matrix(const char **matrix);

size_t	ft_count_matrix_row(const void **matrix);

void	ft_free_matrix(void **matrix);

//TIME

size_t	ft_get_current_time(void);

#endif
