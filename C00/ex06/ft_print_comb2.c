/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_comb2.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/12 19:44:35 by username         #+#    #+#              */
/*   Updated: 2026/11/23 17:48:46 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	nbr(int x, int w)
{
	char	o;
	char	l;
	char	m;
	char	n;

	o = (x / 10) + '0';
	l = (x % 10) + '0';
	m = (w / 10) + '0';
	n = (w % 10) + '0';
	write(1, &o, 1);
	write(1, &l, 1);
	write(1, " ", 1);
	write(1, &m, 1);
	write(1, &n, 1);
	if (!(x == 98 && w == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			nbr(a, b);
			b++;
		}
		a++;
	}
}
