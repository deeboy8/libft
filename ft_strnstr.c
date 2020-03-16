/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbooker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 18:28:36 by dbooker           #+#    #+#             */
/*   Updated: 2020/03/11 12:16:42 by dbooker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t j;
	
	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] && i < len)
	{
		if (s1[i] == s2[0])
		{
			j = 1;
			while (s2[i] && s1[i + j] == s2[j] && (i + j) < len)
				j++;
			if (s2[j] == '\0')
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
