/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbooker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 20:04:49 by dbooker           #+#    #+#             */
/*   Updated: 2020/03/04 12:11:59 by dbooker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	char			*p;
	char			*p2;
	unsigned char	uc;

	p = (char *)dst;
	p2 = (char *)src;
	uc = c;
	i = 0;
	while (p2[i] && i < n)
	{
		p[i] = p2[i];
		i++;
		if (p[i - 1] == uc)
			return (&((unsigned char *)p)[i]);
	}
	p[i] = '\0';
	return (NULL);
}
