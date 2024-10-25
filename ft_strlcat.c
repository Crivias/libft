/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idridi <idridi@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:23:11 by idridi            #+#    #+#             */
/*   Updated: 2024/10/25 18:54:28 by idridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;

	j = ft_strlen(dst);
	i = 0;
	while (i < size && src[i])
	{
		(unsigned)dst[j + i] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	j += ft_strlen((char *)src);
	return (j);
}
int main(int c, char **v)
{
    char *a = "salut lesa";
    char b[] = "suces t";
    ft_strlcat(b, a, 10);
    printf("%s \n", b);
    return 0;
}