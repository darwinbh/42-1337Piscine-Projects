/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 11:17:55 by username          #+#    #+#             */
/*   Updated: 2026/11/23 20:22:32 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '-' || base[i] == '+'
				|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
		return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_digit(char x, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == x)
			return (i);
		i++;
	}
	return (-1);
}

int	signe(char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
		(*i)++;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign = -sign;
		(*i)++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	len;
	int	dijit;
	int	sign;
	int	result;

	len = check_base(base);
	if (len == 0)
		return (0);
	i = 0;
	sign = signe(str, &i);
	dijit = ft_digit(str[i], base);
	result = 0;
	while (dijit != -1)
	{
		result = result * len + dijit;
		i++;
		dijit = ft_digit(str[i], base);
	}
	return (result * sign);
}
