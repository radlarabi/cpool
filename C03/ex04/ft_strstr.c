/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:29:47 by rlarabi           #+#    #+#             */
/*   Updated: 2022/07/30 17:35:03 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
			i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *find)
{
	unsigned int	temp;
	unsigned int	i;

	temp = 0;
	i = 0;
	if (find[i] == '\0')
		return (str);
	while (find[temp] != '\0')
	{
		temp++;
	}
	while (str[i] != '\0')
	{
		if (find[0] == str[i])
		{
			if (ft_strncmp(str + i, find, temp) == 0)
			{
				return (str + i);
			}
		}
		i++;
	}
	return (0);
}
