/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:40:58 by mmottal           #+#    #+#             */
/*   Updated: 2017/11/09 09:37:25 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

void	affiche(char **str)
{
	int		m;

	m = 1;
	while (str[m])
	{
		ft_putstr(str[m]);
		ft_putchar('\n');
		m++;
	}
}

int		main(int argc, char **argv)
{
	char	*temp;
	int		k;
	int		j;

	k = argc - 1;
	while (k >= 1)
	{
		j = 1;
		while (j != k)
		{
			if (ft_strcmp(argv[k], argv[j]) < 0)
			{
				temp = argv[k];
				argv[k] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		k--;
	}
	affiche(argv);
	return (0);
}
