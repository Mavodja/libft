/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:18:59 by acosta            #+#    #+#             */
/*   Updated: 2022/04/04 19:42:08 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*tmp_src;
	char		*tmp_dst;

	if (dst != 0 || src != 0)
	{
		tmp_src = (char *)src;
		tmp_dst = (char *)dst;
		while (n--)
			*tmp_dst++ = *tmp_src++;
	}
	return (dst);
}
