/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hduflos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:40:58 by hduflos           #+#    #+#             */
/*   Updated: 2024/11/12 09:41:50 by hduflos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*new;
	t_list	*new_lst;

	if (!lst || !f)
		return (NULL);
	cur = lst;
	new_lst = NULL;
	while (cur)
	{
		new = ft_lstnew(f(cur->content));
		if (!new)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new);
		cur = cur->next;
	}
	return (new_lst);
}
