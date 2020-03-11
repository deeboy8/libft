/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbooker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 18:03:39 by dbooker           #+#    #+#             */
/*   Updated: 2020/03/11 10:56:47 by dbooker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char *p;
	char *p2;

	if (s2 == '\0')
		return ((char *)s1);
	while (*s1)
	{
		p = (char *)s1;
		p2 = (char *)s2;
		while (*p2 && *p == *p2)
		{
			p++;
			p2++;
		}
		if (*p2 == '\0')
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
