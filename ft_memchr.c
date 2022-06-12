/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 19:39:21 by acosta            #+#    #+#             */
/*   Updated: 2022/03/27 20:00:39 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int			i;
	char		d;
	char		*ps;

	i = 0;
	d = (char)c;
	ps = (char *)s;
	while (n--)
	{
		if (*ps != d)
			ps++;
		else
			return (ps);
	}
	return (0);
}
