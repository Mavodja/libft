/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:06:48 by acosta            #+#    #+#             */
/*   Updated: 2022/05/05 16:20:21 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nez;

	nez = malloc(sizeof(t_list));
	if (!nez)
		return (NULL);
	nez->content = content;
	nez->next = NULL;
	return (nez);
}
