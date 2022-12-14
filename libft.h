/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:35:44 by msariasl          #+#    #+#             */
/*   Updated: 2022/12/19 21:09:57 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include <stddef.h>
# include <fcntl.h>
# include "stdarg.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//MANDOTORY
int				ft_isalpha(int i);
int				ft_isdigit(int i);
int				ft_isalnum(int i);
int				ft_isascii(int i);
int				ft_isprint(int i);
size_t			ft_strlen(const char *s);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcat(char *dest, char *src, size_t size);
int				ft_toupper(int i);
int				ft_tolower(int i);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *nptr);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *si, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
//BONUS
int				ft_lstsize(t_list *lst);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
//GET_NEXT_LINE
char			*get_next_line(int fd);
int				gnl_ft_strlen(char *s);
char			*gnl_ft_strjoin(char *s1, char *s2);
char			*gnl_ft_strchr(const char *s, int c);
//PRINTF
int				ft_putchar(char c);
int				ft_printpercent(void);
int				ft_printstr(char *s);
int				ft_printnbr(int n);
int				ft_putnbr(int n);
int				ft_print_unsigned(unsigned int n);
int				ft_print_hex(unsigned int n, const char format);
int				ft_print_ptr(unsigned long long n);
int				ft_printf(const char *str, ...);
void			ft_putstr(char *s);
void			ft_put_hex(unsigned int n, const char format);
#endif
