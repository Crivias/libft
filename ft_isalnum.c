/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idridi <idridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:02:05 by idridi            #+#    #+#             */
/*   Updated: 2024/10/01 16:23:29 by idridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(char b)
{
	if (b >= 'A' && b <= 'Z' || b >= 'a' && b <= 'z'|| b >= '0' && b <= '9')
		return (1);
	return (0);
}
