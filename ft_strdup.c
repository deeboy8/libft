/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbooker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:44:32 by dbooker           #+#    #+#             */
/*   Updated: 2020/02/26 18:39:50 by dbooker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dup;

	dup = (char*)malloc(sizeof(*dup) * ((ft_strlen(s1)) + 1));
	if (dup == NULL)
		return (NULL);
	else
		ft_strcpy(dup, s1);
	return (dup);
}
