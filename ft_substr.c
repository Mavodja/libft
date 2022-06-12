/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 22:12:16 by acosta            #+#    #+#             */
/*   Updated: 2022/04/23 22:30:25 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*sub;
	unsigned int		i;
	unsigned int		u;

	u = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		u = 1;
	else if (start + len > ft_strlen(s))
		u = ft_strlen(s) - start + 1;
	else
		u = len + 1;
	sub = (char *)malloc(sizeof(char) * u);
	if (!sub)
		return (NULL);
	while (len-- && s[i + start] && start < ft_strlen(s))
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
