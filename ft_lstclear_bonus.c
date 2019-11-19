/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 21:56:44 by alromero          #+#    #+#             */
/*   Updated: 2019/11/19 20:29:42 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_lstclear(t_list **lst, void (*del)(void *))
{
	while ((*lst)->next != NULL)
	{
		del((*lst)->next);
		lst++;
	}
	lst = NULL;
	return (lst);
}
