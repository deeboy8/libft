/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbooker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 16:42:56 by dbooker           #+#    #+#             */
/*   Updated: 2020/03/06 14:53:45 by dbooker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		j;
	size_t	i;
	size_t	d;

	i = 0;
	j = 0;
	d = (size_t)ft_strlen(dst);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if ((size_t)ft_strlen(src) >= dstsize && d > dstsize)
		return (ft_strlen(src) + dstsize);
	return (d + ft_strlen(src));
}
