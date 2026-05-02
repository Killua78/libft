/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboubeke <nboubeke@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 18:38:01 by nboubeke          #+#    #+#             */
/*   Updated: 2026/05/02 19:28:42 by nboubeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	while (*lst != NULL)
	{
		node = *lst;
		*lst = (*lst)->next;
		del(node->content);
		free(node);
	}
	*lst = NULL;
}
