/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:57:32 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/19 09:17:26 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define BUFFER_SIZE	1024
# define OPEN_MAX		255

# include <fcntl.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/stat.h>
# include <time.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*
** LIBRARY: <ctype.h>
*/

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_isblank(int c);
int				ft_isspace(int c);
int				ft_iscntrl(int c);
int				ft_islower(int c);
int				ft_isupper(int c);
int				ft_isgraph(int c);
int				ft_ispunct(int c);
int				ft_isxdigit(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);

/*
** LIBRARY: <strings.h>
*/

void			*ft_memset(void *b, int c, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			ft_bzero(void *s, size_t n);
int				ft_strlen(const char *s);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, size_t n);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(char *haystack, char *needle);
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strdup(const char *s1);
char			*ft_strnstr(const char *haystack,
					const char *needle, size_t len);

/*
** LIBRARY: <stdio.h>
*/

void			ft_putchar(char c);

/*
** LIBRARY: <stdlib.h>
*/

int				ft_atoi(const char *str);
void			*ft_calloc(size_t count, size_t size);

/*
** FT_PRINTF
*/

void			ft_putstr_ptf(char *s, int *len);
int				ft_printf(const char *str, ...);
void			ft_putchar_ptf(int c, int *len);
int				ft_putnbr_ptf(unsigned long n, char *base, unsigned long b_len);
int				ft_put_any_number(long num, char *base, unsigned long b_len);

/*
** Get Next Line
*/

char			*get_next_line(int fd);
char			*ft_getline(char *rest);
char			*ft_new_rest(char *rest);
char			*ft_strdup_gnl(char *s1);
char			*ft_read_to_rest(int fd, char *rest);
char			*ft_strjoin_gnl(char *rest, char *buff);
int				ft_check_nl(char *rest);
size_t			ft_strlen_gnl(char *s);

/*
** Additional Functions - Strings
*/

char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
** Additional Functions - int to ascii
*/

char			*ft_itoa(int n);

/*
** Additional Functions - FD functions
*/

void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

/*
** Additional Functions - Linked list
*/

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

/*
** Additional Functions - Math
*/

int				ft_fibonacci(int index);
int				ft_isprime(int nb);
int				ft_factorial(int nb);
int				ft_pow(int nb, int power);
int				ft_sqrt(int nb);

/*
** Additional Functions - Other
*/

void			ft_putstr(char *s);
void			ft_putnstr(char *s, int n);
void			ft_putendl(char *s);
void			ft_putnbr(int n);
int				ft_isnegative(int n);
void			ft_swap(int *a, int *b);
void			ft_div_mod(int a, int b, int *div, int *mod);
void			ft_ultimate_div_mod(int *a, int *b);
char			*ft_strcapitalize(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strupcase(char *str);
size_t			ft_count_digit(long long int n);
size_t			ft_count_words(char const *s, char c);
void			ft_putlnbr(long long int n);
char			*ft_utoa_base(unsigned int n, char *base);
char			*ft_strrev(char *str);
void			*ft_strcpy_gnl(char *dst, char *src, size_t n);

// Custom functions
void			ft_msg(char *msg);

#endif
