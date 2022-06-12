/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:21:24 by acosta            #+#    #+#             */
/*   Updated: 2022/04/23 21:35:00 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = NULL;
	if (count < SIZE_MAX && size < SIZE_MAX)
	{
		p = (void *)malloc(count * size);
		if (p)
			ft_bzero(p, count * size);
	}
	return (p);
}
