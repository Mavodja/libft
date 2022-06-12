/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:49:10 by acosta            #+#    #+#             */
/*   Updated: 2022/04/24 00:03:41 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	nb;

	nb = ft_strlen(n);
	if (*n == '\0')
		return ((char *)h);
	while (*h && len >= nb && len--)
	{
		if (ft_strncmp(h, n, nb))
			h++;
		else
			return ((char *)h);
	}
	return (0);
}
