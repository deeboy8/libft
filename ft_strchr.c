/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbooker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 12:56:58 by dbooker           #+#    #+#             */
/*   Updated: 2020/03/09 16:40:08 by dbooker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char cha;

	cha = (char)c;
	while (*s)
	{
		if (*s == cha)
			return ((char *)s);
		s++;
	}
	if (cha == '\0')
		return ((char *)s);
	return (NULL);
}
