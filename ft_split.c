/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:51:21 by acosta            #+#    #+#             */
/*   Updated: 2022/04/21 17:18:43 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_count(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			j++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (j);
}

static char	*extract(char const *s, char c)
{
	size_t	i;
	char	*sub;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != c && s[i] != '\0')
		i++;
	sub = ft_substr(s, 0, i);
	return (sub);
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	int				i;
	int				k;

	k = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (c_count(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != 0)
		{
			tab[k] = extract(s + i, c);
			k++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	tab[k] = NULL;
	return (tab);
}
