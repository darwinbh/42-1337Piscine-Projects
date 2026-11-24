/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putstr_non_printable.c                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/29 13:04:51 by username         #+#    #+#              */
/*   Updated: 2026/11/23 17:53:21 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*index;
	int		c;
	int		c2;

	index = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			c = str[i] / 16;
			c2 = str[i] % 16;
			write(1, &index[c], 1);
			write(1, &index[c2], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
