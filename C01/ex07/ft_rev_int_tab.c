/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_rev_int_tab.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/15 17:21:17 by username         #+#    #+#              */
/*   Updated: 2026/11/23 17:50:04 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			swp = tab[i];
			tab[i] = tab[j];
			tab[j] = swp;
			j++;
		}
		i++;
	}
}
