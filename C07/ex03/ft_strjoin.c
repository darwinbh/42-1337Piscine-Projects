/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:31:02 by username          #+#    #+#             */
/*   Updated: 2026/11/23 20:27:40 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	malloc_size(int size, char **srcs, char *sep)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (srcs[i][j])
			j++;
		len += j;
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	return (len + (i * (size - 1) + 1));
}

void	strcp(char *str, char **srcs)
{
	int	i;
	int	j;

	j = 0;
	while (str[j])
		j++;
	i = 0;
	while (srcs[0][i])
	{
		str[j] = srcs[0][i];
		i++;
		j++;
	}
	str[j] = '\0';
}

void	sepcpy(char *str, char *sep)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
		i++;
	j = 0;
	while (sep[j])
	{
		str[i] = sep[j];
		i++;
		j++;
	}
	str[i] = '\0';
}

char	*empty_str(void)
{
	char	*str;

	str = malloc(1);
	if (str == 0)
		return (0);
	str[0] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **srcs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
		return (empty_str());
	i = malloc_size(size, srcs, sep);
	str = malloc(i * sizeof(char));
	if (str == 0)
		return (0);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		strcp(str, &srcs[i]);
		if (i + 1 == size)
			break ;
		sepcpy(str, sep);
		i++;
	}
	return (str);
}
