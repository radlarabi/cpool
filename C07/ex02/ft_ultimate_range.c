/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:40:02 by rlarabi           #+#    #+#             */
/*   Updated: 2022/08/10 18:40:59 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*i;
	int	j;

	j = 0;
	i = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		i[j] = min;
		min++;
		j++;
	}
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
		return (0);
	else
		*range = ft_range(min, max);
	if (!ft_range(min, max))
	{
		*range = 0;
		return (-1);
	}
	return (max - min);
}
