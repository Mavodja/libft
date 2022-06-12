/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:34:56 by acosta            #+#    #+#             */
/*   Updated: 2022/03/27 18:59:50 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char*s, int c)
{
	int			i;
	char		d;
	char		*ps;

	i = 0;
	d = (char)c;
	ps = (char *)s;
	while (ps[i] != '\0')
	{
		if (ps[i] == d)
			return (ps + i);
		i++;
	}
	if (d == '\0')
		return (ps + i);
	return (0);
}
