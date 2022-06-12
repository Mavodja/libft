/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:58:26 by acosta            #+#    #+#             */
/*   Updated: 2022/04/04 19:46:10 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned const char	*tmp_src;
	unsigned char		*tmp_dst;

	tmp_src = (unsigned char *)src;
	tmp_dst = (unsigned char *)dst;
	if (dst != 0 || src != 0)
	{
		if (tmp_src < tmp_dst)
		{
			tmp_src += n;
			tmp_dst += n;
			while (n--)
				*--tmp_dst = *--tmp_src;
		}
		else
		{	
			while (n--)
				*tmp_dst++ = *tmp_src++;
		}
	}
	return (dst);
}
