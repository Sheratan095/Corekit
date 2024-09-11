/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:40:17 by maceccar          #+#    #+#             */
/*   Updated: 2024/09/11 16:04:08 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "corekit.h"

// Forward Declarations 
typedef enum e_bool	t_bool;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_isspace(int c);

size_t	ft_strlen(const char	*str);

void	*ft_memset(void *dest, int c, size_t count);

void	*ft_bzero(void *dest, size_t count);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t count);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

size_t	ft_strlcat(char *dest, const char *src, unsigned int size);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c);

int		ft_strncmp(const char *str1, const char *str2, size_t n);

int		ft_strcmp(const char *s1, const char *s2);

ssize_t	ft_str_idxofchar(const char *str, char c);

ssize_t	ft_str_idxofchar_from(const char *str, int start, char c);

//TO DO cambiargli nome
int		ft_find_occurrences(char *str, char c, size_t start_index);

char	*ft_strconcat(char *s1, char *s2, t_bool free_s1, t_bool free_s2);

void	*ft_memchr(const void *str, int c, size_t n);

int		ft_memcmp(const void *str1, const void *str2, size_t n);

char	*ft_strnstr(const char *big, const char *little, size_t len);

int		ft_atoi(const char *str);

long	ft_atol(const char *s);

void	*ft_calloc(size_t nitems, size_t size);

char	*ft_strdup(char *src);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

char	**ft_split(char const *s, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

void	ft_putnbr_fd(int n, int fd);

t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new);

int		ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstdelone(t_list *lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *));

#endif
