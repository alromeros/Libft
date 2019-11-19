/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 21:58:22 by alromero          #+#    #+#             */
/*   Updated: 2019/11/19 20:25:25 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst->next != NULL)
	{
		f(lst);
		lst++;
	}
	return (lst);
}
