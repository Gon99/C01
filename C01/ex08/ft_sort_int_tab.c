/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gliano-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 09:37:28 by gliano-r          #+#    #+#             */
/*   Updated: 2020/02/12 10:14:25 by gliano-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(int *tab, int size)
{
	int i;
	int aux;

	i = 0;
	aux = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
