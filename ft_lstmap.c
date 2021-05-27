/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:56:56 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/27 17:58:00 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**new_lst;
	t_list	*tmp_elem;
	int		size;

	size = ft_lstsize(lst);
	new_lst = (t_list **)malloc(size * sizeof(t_list *));
	if (!new_lst || !lst || !f || !del)
		return (NULL);
	while (lst)
	{
		tmp_elem = ft_lstnew((*f)(lst->content));
		if (tmp_elem == NULL)
		{
			ft_lstclear(new_lst, del);
			free(new_lst);
			return (NULL);
		}
		ft_lstadd_back(new_lst, tmp_elem);
		lst = lst->next;
	}
	return (*new_lst);
}
