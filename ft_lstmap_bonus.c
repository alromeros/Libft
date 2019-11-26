/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 21:59:05 by alromero          #+#    #+#             */
/*   Updated: 2019/11/26 11:26:40 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *gon;
	t_list *aux;
	t_list *auxgon;

	aux = lst;
	if (!(gon = malloc(sizeof(t_list))))
		return (0);
	auxgon = gon;
	while (aux)
	{
		auxgon->content = f(aux->content);
		if (!(auxgon->next = malloc(sizeof(t_list))))
			ft_lstclear(&aux, del);
		aux = aux->next;
		auxgon = auxgon->next;
	}
	return (gon);
}
