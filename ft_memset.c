/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:13:06 by acosta            #+#    #+#             */
/*   Updated: 2022/03/23 18:03:58 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;	
	unsigned char	u;
	char			*p;

	u = (unsigned char) c;
	p = (char *) b;
	i = 0;
	while (i < len)
	{
		p[i] = u;
		i++;
	}
	return (b);
}
