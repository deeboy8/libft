/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbooker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 12:12:26 by dbooker           #+#    #+#             */
/*   Updated: 2020/03/04 15:58:38 by dbooker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*p_dst;
	char		*p_src;

	i = 0;
	p_dst = (char *)dst;
	p_src = (char *)src;
	if (len == 0)
		return (dst);
	if (p_src < p_dst)
		while (++i <= len)
			p_dst[len - i] = p_src[len - i];
	else
		while (len-- > 0)
			*(p_dst++) = *(p_src++);
	return (dst);
}
