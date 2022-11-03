/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:06:52 by rlarabi           #+#    #+#             */
/*   Updated: 2022/08/10 18:36:16 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

int	strslen(char **str, int size)
{
	int	a;
	int	i;

	i = 0;
	a = 0;
	while (i < size)
	{
		a += ft_strlen(str[i]);
		i++;
	}
	return (a);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		i;
	int		totallen;
	int		j;

	j = -1;
	totallen = strslen(strs, size) + ft_strlen(sep) * (size - 1);
	i = 0;
	if (size == 0)
		return (malloc(sizeof(char)));
	ret = (char *) malloc(sizeof(char) * totallen + 1);
	ft_strcpy(ret, strs[0]);
	while (++j < size)
	{
		ft_strcpy(ret, strs[i]);
		ret += ft_strlen(strs[i]);
		if (j + 1 < size)
		{
			ret = ft_strcpy(ret, sep);
			ret += ft_strlen(sep);
		}
		i++;
	}
	ret -= totallen;
	return (ret);
}
