/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corekit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:40:17 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/17 17:48:30 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COREKIT_H
# define COREKIT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include <sys/time.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# include "stack.h"
# include "libft.h"
# include "ft_printf.h"

typedef enum e_bool
{
	false,
	true
}	t_bool;

//Not including get_next_line.h because i don't want to
//	inlcude also their help functions, so i just use their prototype

char	*get_next_line(int fd, t_bool last_call);

char	*ft_strjoin_free_s1(char *s1, char *s2);

t_bool	ft_is_string_numeric(const char *str);

t_bool	ft_is_string_empty(char	*string);

t_bool	ft_str_only_contains(char *str, char *charset);

void	ft_str_skip_spaces(char *string, int *i);

char	*ft_pad_string(char *src, char padding_char, int padding_nbr);

int		ft_get_absolute(int number);

//MATIRX

char	**ft_duplicate_char_matrix(const char **matrix);

void	ft_print_char_matrix(const char **matrix);

size_t	ft_count_matrix_row(const void **matrix);

void	ft_free_matrix(void **matrix);

char	**ft_matrix_add_front(char **matrix, char *str, t_bool free_mtx);

char	**ft_matrix_add_back(char **matrix, char *str, t_bool free_mtx);

char	**ft_matrix_remove_at(char **matrix, size_t index, t_bool free_matrix);

ssize_t	ft_matrix_index_of(char **matrix, char *target);

//TIME

size_t	ft_get_current_time(void);

//FILES

t_bool	ft_file_is_dir(char *file);

#endif
