/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:25:28 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/08 11:53:27 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* STANDARD LIBRARIES */
# include <stdlib.h>
# include <stddef.h>
# include <stdint.h> 
# include <unistd.h>
# include <fcntl.h>

/* TYPEDEF */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/* FROM ctype.h */
int		ft_isalpha(int c); // OK!
int		ft_isdigit(int c); // OK!
int		ft_isalnum(int c); // OK!
int		ft_isascii(int c); // OK!
int		ft_isprint(int c); // OK!
int		ft_toupper(int c); // OK!
int		ft_tolower(int c); // OK!
int		ft_atoi(const char *nptr); // OK!

/* FROM string.h */
size_t	ft_strlen(const char *s); // OK!
void	*ft_memset(void *s, int c, size_t n); // OK!
void	ft_bzero(void *s, size_t n); // OK!
void	*ft_memcpy(void *dest, const void *src, size_t n); // OK!
void	*ft_memmove(void *dest, const void *src, size_t n); // OK!
size_t	ft_strlcpy(char *dest, const char *src, size_t size); // OK!
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); // OK!
char	*ft_strchr(const char *s, int c); // OK!
char	*ft_strrchr(const char *s, int c); // OK!
int		ft_strncmp(const char *s1, const char *s2, size_t n); // OK!
void	*ft_memchr(const void *s, int c, size_t n); // OK!
int		ft_memcmp(const void *s1, const void *s2, size_t n); // OK!
char	*ft_strdup(const char *s); // OK!

/* FROM stdlib.h */
void	*ft_calloc(size_t nmemb, size_t size); // OK! 

/* ADDITIONAL FUNCTIONS */
char	*ft_substr(char const *s, unsigned int start, size_t len); // OK!
char	*ft_strjoin(char const *s1, char const *s2); // OK!
char	*ft_strtrim(char const *s1, char const *set); // created
char	**ft_split(char const *s, char c); // created
char	*ft_itoa(int n); // created
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)); // OK!
void	ft_striteri(char *s, void (*f)(unsigned int, char *)); // OK!
void	ft_putchar_fd(char c, int fd); // OK!
void	ft_putstr_fd(char *s, int fd); // OK!
void	ft_putendl_fd(char *s, int fd); // OK!
void	ft_putnbr_fd(int n, int fd); // OK!

/* HANDLING LISTS */
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
