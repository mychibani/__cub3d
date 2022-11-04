/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_fonctions.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:59:20 by ychibani          #+#    #+#             */
/*   Updated: 2022/11/04 11:30:19 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FONCTIONS_H
# define FONCTIONS_H

/*
**			Ternarys
*/

int			int_trn(int condition, int success, int failure);
double      double_trn(int condition, double success, double failure);
float   	float_trn(int condition, float success, float failure);
char        char_trn(int condition, char success, char failure);
int         *int_ptr_trn(int condition, int *success, int *failure);
char        *char_ptr_trn(int condition, char *success, char *failure);
void        *void_ptr_trn(int condition, void *success, void *failure);


/*
**			Memory
*/

void		*__memset(void *b, int c, size_t len);
void		*__memcpy(void *dst, const void *src, size_t n);
void		*__memmove(void *dst, const void *src, size_t len);
void		*__memchr(const void *s, int c, size_t n);
int			__memcmp(const void *s1, const void *s2, size_t n);
void		*__calloc(size_t count, size_t size);
void		__bzero(void *s, size_t n);
int			__memcmp(const void *s1, const void *s2, size_t n);


/*
**			Strings
*/

int			__strncmp(const char *s1, const char *s2, size_t n);
int			__strcmp(const char *s1, const char *s2);
char		*__strchr(const char *s, int c);
char		*__strrchr(const char *s, int c);
size_t		__strlcat(char *dst, char *src, size_t dstsize);
size_t		__strlcpy(char *dst, const char *src, size_t dstsize);
char		*__strnstr(const char *haystack, const char *needle, size_t len);
char		*__strdup(const char *s1);
char		*__substr(char const *s, unsigned int start, size_t len);
char		*__strtrim(char const *s1, char const *set);
char		**__split(char const *s, char c);
char		*__strmapi(char const *s, char (*f)(unsigned int, char));
void		__striteri(char *s, void (*f)(unsigned int, char*));
char		*__strstr(const char *str, const char *find);
size_t		__strlen(const char *s);


/*
**			Stdlib
*/

char		*__itoa(int n);
int			__atoi(const char *str);
char		*__strjoin(char *s1, char *s2);


/*
**			Stdio
*/

int			__printf(char *format, ...);


/*
**			Char
*/

int			__isalpha(int c);
int			__isdigit(int c);
int			__isalnum(int c);
int			__isascii(int c);
int			__isprint(int c);
int			__toupper(int c);
int			__tolower(int c);


/*
**			Fd
*/

void		__putchar_fd(char c, int fd);
void		__putstr_fd(char *s, int fd);
void		__putendl_fd(char *s, int fd);
void		__putnbr_fd(int n, int fd);
char		*__gnl(int fd);


/*
**			Maths
*/

float		float_abs(float x);
float       minus_fractional_part(float x);
float       fractional_part(float x);
int         integer_part(float x);

/*
**			Lists
*/

t_list		*__lstnew(void *content);
void		__lstadd_front(t_list **alst, t_list *new);
int			__lstsize(t_list *lst);
t_list		*__lstlast(t_list *lst);
void		__lstadd_back(t_list **alst, t_list *new);
void		__lstdelone(t_list *lst, void (*del)(void *));
void		__lstclear(t_list **lst, void (*del)(void *));
void		__lstiter(t_list *lst, void (*f)(void *));
t_list		*__lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));


/*
**			Utils
*/

void		__swap(int *a, int *b);


#endif