/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:46:59 by mmottal           #+#    #+#             */
/*   Updated: 2017/11/10 12:38:15 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int		resultat;

	resultat = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 && nb == 1)
		return (1);
	while (nb > 1)
	{
		resultat = resultat * (nb);
		nb--;
	}
	return (resultat);
}
