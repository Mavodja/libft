/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:29:40 by acosta            #+#    #+#             */
/*   Updated: 2022/04/06 17:22:10 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	o;

	nb = 0;
	i = 0;
	o = 1;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		o = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ('0' <= str[i] && str[i] <= '9')
	{
		nb = nb * 10 + *(str + i) - 48;
		i++;
	}
	return (o * nb);
}
