/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:41:54 by acosta            #+#    #+#             */
/*   Updated: 2022/04/24 01:53:02 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	init(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && set[j] != '\0')
	{
		j = 0;
		while (set[j] != s1[i] && set[j] != '\0')
			j++;
		i++;
	}
	if (ft_strlen(set) > 0)
		i--;
	return (i);
}

static size_t	fin(char const *s1, char const *set)
{
	size_t	j;
	size_t	i;

	j = 0;
	i = ft_strlen(s1) - 1;
	while (i >= 0 && set[j] != '\0')
	{
		j = 0;
		while (set[j] != s1[i] && set[j] != '\0')
			j++;
		i--;
	}
	return (++i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = init(s1, set);
	end = fin(s1, set) + 1;
	if (start > end)
		s = malloc(sizeof(char));
	else
		s = malloc(sizeof(char ) * (end - start + 1));
	if (!s)
		return (NULL);
	if (start > end)
		*s = '\0';
	else
		ft_strlcpy(s, s1 + start, end - start + 1);
	return (s);
}
