/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaitlyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:44:31 by lcaitlyn          #+#    #+#             */
/*   Updated: 2021/10/28 11:44:33 by lcaitlyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*delete;

	if (!lst || !del || !*lst)
		return ;
	while (lst != NULL && *lst != NULL)
	{
		delete = (*lst)->next;
		ft_lstdelone(*lst, (del));
		*lst = delete;
	}
}
