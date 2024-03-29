/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:09:00 by rlarabi           #+#    #+#             */
/*   Updated: 2022/08/11 13:09:27 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	f;
	char	m;
	char	l;

	f = '0';
	while (f <= '7')
	{
		m = f + 1;
		while (m <= '8')
		{
			l = m + 1;
			while (l <= '9')
			{
				write(1, &f, 1);
				write(1, &m, 1);
				write(1, &l, 1);
				if (f != '7')
					write(1, ", ", 2);
				l++;
			}
			m++;
		}
		f++;
	}
}
