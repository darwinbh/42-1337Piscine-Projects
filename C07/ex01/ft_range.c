/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaha <bbaha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 15:50:33 by username          #+#    #+#             */
/*   Updated: 2026/11/23 20:27:19 by bbaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*rt;
	int	i;

	if (min >= max)
		return (0);
	rt = malloc((max - min) * sizeof(int));
	if (rt == 0)
		return (0);
	i = 0;
	while (min < max)
	{
		rt[i] = min;
		i++;
		min++;
	}
	return (rt);
}
