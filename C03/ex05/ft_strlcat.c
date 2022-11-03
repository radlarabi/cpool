/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 10:28:50 by rlarabi           #+#    #+#             */
/*   Updated: 2022/07/30 17:33:41 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;
	unsigned int	destlen;

	srclen = 0;
	destlen = 0;
	i = 0;
	while (dest[destlen] != '\0')
		destlen++;
	while (src[srclen] != '\0')
		srclen++;
	if (!size || size <= destlen)
		return (size + srclen);
	while (src[i] != '\0' && i < size - destlen - 1)
	{
		dest[i + destlen] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (srclen + destlen);
}
