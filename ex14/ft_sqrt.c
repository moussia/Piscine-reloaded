/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:19:01 by mmottal           #+#    #+#             */
/*   Updated: 2017/11/09 09:30:20 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_sqrt(int nb)
{
	long	x;
	long	y;

	if (nb <= 0)
		return (0);
	x = nb;
	y = (x + (nb / x)) / 2;
	while (y < x)
	{
		x = y;
		y = (x + (nb / x)) / 2;
	}
	if (y * y != nb)
		return (0);
	return (y);
}
