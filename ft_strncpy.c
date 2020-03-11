/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbooker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:08:40 by dbooker           #+#    #+#             */
/*   Updated: 2020/02/26 14:46:49 by dbooker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t len)
{
	size_t index;

	index = 0;
	while (src[index] != '\0' && (index < len))
	{
		dest[index] = src[index];
		index++;
	}
	while (index < len)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
