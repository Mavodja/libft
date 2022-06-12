/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:02:58 by acosta            #+#    #+#             */
/*   Updated: 2022/03/21 23:35:40 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr(int n, char *s, int i, int pn)
{
	unsigned int	m;

	m = n;
	if (n < 0)
	{
		s[0] = '-';
		m = -m;
		i--;
	}
	if (m > 9)
	{
		putnbr(m / 10, s, i - 1, pn);
	}
	else
	{
		s[i - pn] = m + 48;
		return ;
	}
	s[i - pn] = ((m % 10) + 48);
}

static int	nbr_digit(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		pn;

	if (n < 0)
		pn = 0;
	else
		pn = 1;
	s = malloc(nbr_digit(n) * sizeof(char) + 1);
	if (!s)
		return (NULL);
	putnbr(n, s, nbr_digit(n), pn);
	s[nbr_digit(n)] = '\0';
	return (s);
}
