/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 09:47:15 by rlarabi           #+#    #+#             */
/*   Updated: 2022/07/31 10:15:40 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*b;
	int		a;
	int		i;

	i = 0;
	a = argc;
	b = argv[0];
	while (b[i] != '\0')
	{
		write(1, &b[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
