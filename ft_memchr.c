/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbooker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:15:34 by dbooker           #+#    #+#             */
/*   Updated: 2020/03/05 15:45:13 by dbooker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_s;

	ptr_s = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (ptr_s[i] != '\0' && i < n)
	{
		if (ptr_s[i] == (unsigned char)c)
			return (&(ptr_s[i]));
		i++;
	}
	return (NULL);
}
