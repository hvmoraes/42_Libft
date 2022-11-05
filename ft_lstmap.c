/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.pt>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:52:36 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/11/04 12:19:37 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*cont;

	if (!lst)
		return (0);
	result = 0;
	while (lst)
	{
		cont = ft_lstnew(f(lst->content));
		if (!cont)
		{
			ft_lstclear(&result, del);
			return (0);
		}
		ft_lstadd_back(&result, cont);
		lst = lst->next;
	}
	return (result);
}
