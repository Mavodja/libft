/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:22:31 by acosta            #+#    #+#             */
/*   Updated: 2022/03/25 14:54:55 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char				*s2;
	unsigned int		i;

	s2 = malloc (ft_strlen(s1) * sizeof(char) + 1);
	i = 0;
	if (!s2)
		return (0);
	while (i <= ft_strlen(s1))
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
