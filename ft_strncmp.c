/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbooker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 16:55:59 by dbooker           #+#    #+#             */
/*   Updated: 2020/02/26 16:49:50 by dbooker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t index;

	index = 0;
	while ((s1[index] != '\0' || s2[index] != '\0') && (index < n))
	{
		if ((s1[index] != s2[index]))
			return ((unsigned char)s1[index] - (unsigned char)s2[index]);
		index++;
	}
	index--;
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
