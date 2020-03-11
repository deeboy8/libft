/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbooker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 20:51:17 by dbooker           #+#    #+#             */
/*   Updated: 2020/02/28 18:07:48 by dbooker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int numb;

	if (n < 0)
	{
		numb = -n;
		ft_putchar('-');
	}
	else
		numb = n;
	if (numb < 10)
		ft_putchar(numb + '0');
	else
	{
		ft_putnbr(numb / 10);
		ft_putchar(numb % 10 + '0');
	}
}
