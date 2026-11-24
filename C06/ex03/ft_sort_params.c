/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 09:00:40 by bbaha             #+#    #+#             */
/*   Updated: 2026/08/25 09:00:44 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(int rc, char **rv)
{
	int	i;
	int	j;
	int	k;

	i = rc;
	j = 1;
	k = 0;
	while (j < i)
	{
		k = 0;
		while (rv[j][k])
		{
			write(1, &rv[j][k], 1);
			k++;
		}
		write(1, "\n", 1);
		j++;
	}
}

void	swap(char **avl, char **avk)
{
	int		j;
	char	*swap;

	j = 0;
	while (avl[0][j] && avk[0][j] && avl[0][j] == avk[0][j])
		j++;
	if (avl[0][j] > avk[0][j])
	{
		swap = *avl;
		*avl = *avk;
		*avk = swap;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	k;
	int	l;

	i = argc;
	l = 1;
	while (l < i)
	{
		k = l + 1;
		while (k < i)
		{
			swap(&argv[l], &argv[k]);
			k++;
		}
		l++;
	}
	putstr(argc, argv);
	return (0);
}
