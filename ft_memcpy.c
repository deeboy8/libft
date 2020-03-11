/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbooker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 14:56:32 by dbooker           #+#    #+#             */
/*   Updated: 2020/03/01 20:18:44 by dbooker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p;
	char	*p2;
	size_t	i;

	p = (char *)dst;
	p2 = (char *)src;
	i = 0;
	while (p2 != '\0' && i < n)
	{
		*p++ = *p2++;
		i++;
	}
	return (dst);
}
