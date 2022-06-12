/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 20:55:08 by acosta            #+#    #+#             */
/*   Updated: 2022/04/07 19:34:36 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (dst[j] && j < dstsize)
		j++;
	while (src[i] && (i + j + 1) < dstsize)
	{
		dst[j + i] = src[i];
		i++;
	}
	if (j != dstsize)
		dst[i + j] = '\0';
	return (j + ft_strlen(src));
}
