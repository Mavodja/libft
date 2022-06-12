/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 19:03:42 by acosta            #+#    #+#             */
/*   Updated: 2022/04/05 19:05:56 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char*s, int c)
{
	int			i;
	char		d;
	char		*ps;

	d = (char)c;
	ps = (char *)s;
	i = ft_strlen(ps);
	if (d == '\0')
		return (ps + i);
	while (i--)
	{
		if (ps[i] == d)
			return (ps + i);
	}
	return (0);
}
