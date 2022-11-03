/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:08:16 by rlarabi           #+#    #+#             */
/*   Updated: 2022/07/30 20:15:11 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;

	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	fact = nb * ft_recursive_factorial(nb - 1);
	return (fact);
}
