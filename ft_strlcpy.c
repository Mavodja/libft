/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 20:54:37 by acosta            #+#    #+#             */
/*   Updated: 2022/04/18 14:37:29 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	nb;

	nb = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && (i + 1 < dstsize))
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		*(dst + i) = '\0';
	return (nb);
}
