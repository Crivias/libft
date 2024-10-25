/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idridi <idridi@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:32:49 by idridi            #+#    #+#             */
/*   Updated: 2024/10/25 17:34:30 by idridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

#include <stdio.h>
int main(void)
{
	char b = {'a','b'};
	printf("%d",ft_strlen(b));
}