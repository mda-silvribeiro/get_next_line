/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 12:39:16 by mda-silv          #+#    #+#             */
/*   Updated: 2021/03/04 12:39:18 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t count;

	count = 0;
	if (!dst && !src)
		return (0);
	while (count < n)
	{
		((unsigned char *)dst)[count] = ((unsigned char *)src)[count];
		count++;
	}
	return (dst);
}

char	*ft_strndup(const char *s, size_t n)
{
	char	*cpy;

	if (!(cpy = (char *)malloc(sizeof(char) * (n + 1))))
		return (0);
	ft_memcpy(cpy, s, n);
	cpy[n] = '\0';
	return (cpy);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		aux;
	int		count;

	if (!s1 || !s2 ||
		!(ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (0);
	aux = 0;
	while (s1[aux] != '\0')
	{
		ptr[aux] = s1[aux];
		aux++;
	}
	count = 0;
	while (s2[count] != '\0')
		ptr[aux++] = s2[count++];
	ptr[aux] = '\0';
	return (ptr);
}
