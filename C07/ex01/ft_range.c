/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:48:30 by rlarabi           #+#    #+#             */
/*   Updated: 2022/08/07 11:10:01 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*i;
	int	j;

	j = 0;
	if (max - min <= 0)
		return (0);
	i = (int *) malloc((max - min) * sizeof(int));
	while (j + min < max)
	{
		i[j] = min + j;
		j++;
	}
	return (i);
}
