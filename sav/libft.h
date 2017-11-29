/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:32:35 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/24 09:52:09 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

int		ft_atoi(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strstr(const char *str, const char *to_find);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s, const void *s2, size_t n);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putchardec(char c);
void	ft_putchardec_fd(char c, int fd);
void	ft_putmemstr(void const *b, size_t len);
void	ft_putmemstr_fd(void const *b, size_t len, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putmemendl(void const *b, size_t len);
void	ft_putmemendl_fd(void const *b, size_t len, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd (int , int fd);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	fr_strclr(char *s);
void	fr_striter(char *s, void (*f)(char *));
void	fr_striteri(char *s, void (*f)(unsigned int, char *));
char	*fr_strmap(char const *s, char (*f)(char));
char	*fr_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
