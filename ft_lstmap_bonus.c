/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:14:05 by acosta            #+#    #+#             */
/*   Updated: 2022/05/17 17:48:55 by acosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*bis;

	bis = NULL;
	if (lst)
	{
		while (lst)
		{
			ft_lstadd_back(&bis, ft_lstnew((*f)(lst->content)));
			if (bis->content == NULL)
			{
				ft_lstclear(&bis, del);
				return (NULL);
			}
			lst = lst->next;
		}
	}
	return (bis);
}
