/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:22:31 by rlarabi           #+#    #+#             */
/*   Updated: 2022/08/08 12:01:50 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
		else
			i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		srclen;
	char	*p;
	int		i;

	i = 0;
	srclen = 0;
	while (src[srclen])
		srclen++;
	p = (char *) malloc(sizeof(char) * srclen + 1);
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	if (!p)
		return (NULL);
	return (p);
}
int	count_charset(char *str, char *charset, int char_len)
{
	int	i;
	int temp;

	temp = 0;
	i = 0;
	while (str[i])
	{
		if (!ft_strncmp(str + i, charset, char_len))
			temp++;
		i++;
	}
	return (temp);
}
char	**ft_split(char *str, char *charset)
{
	char	**ret;
	int		str_len;
	int		char_len;
	int		i;
	int		k;
	int		j;
	char	b[700];

	k = 0;
	i = 0;
	char_len = ft_strlen(charset);
	str_len = ft_strlen(str);
	ret = malloc(sizeof(char *) * (count_charset(str, charset, char_len) + 1));
    while (str[i]) 
	{
		j = 0;
    	while (ft_strncmp(str + i, charset, char_len))
		{
			b[j] = str[i];
   			j++;
			i++;
		}
		ret[k] = ft_strdup(b);
		i++;
		k++;
	}
	ret[k] = 0;
	return (ret);
}

int main()
{
	ft_split("abc*cbdg*bh","*");

	return 0;
}
