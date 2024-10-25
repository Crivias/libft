/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idridi <idridi@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:44:20 by idridi            #+#    #+#             */
/*   Updated: 2024/10/08 17:23:28 by idridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*sr;
	unsigned char	*des;

	i = 0;
	sr = (unsigned char *)src;
	des = (unsigned char *)dest;
	while (i < n)
	{
		des[i] = sr[i];
		i++;
	}
	return (dest);
}
