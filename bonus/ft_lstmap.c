/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:52:36 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/10/25 08:59:16 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*cont;

	if (!lst)
		return (0);
	result = 0;
	cont = ft_lstnew(f(lst->content));
	while (lst)
	{
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
