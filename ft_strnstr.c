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
    if (s2 == '\0')
        return ((char *)s1);
    while (s1[i] && i < len)
    {
		j = 0;
        while (s1[i + j])
        {
            p++;
            p2++;
            i++;
        }
        if (*p2 == '\0')
            return ((char *)s1);
        s1++;
        i++;
    }
    return (NULL);	
}
