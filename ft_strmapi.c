/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:20:53 by acosta            #+#    #+#             */
/*   Updated: 2022/04/23 22:38:06 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	i;

	i = 0;
	map = NULL;
	if (s)
	{
		map = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (map)
		{
			while (s[i] != '\0')
			{
				map[i] = f(i, s[i]);
				i++;
			}
			map[i] = '\0';
		}
	}
	return (map);
}
