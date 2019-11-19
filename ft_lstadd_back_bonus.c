/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 21:52:23 by alromero          #+#    #+#             */
/*   Updated: 2019/11/19 21:21:55 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstadd_back(t_list **alst, t_list *new)
{
	if (alst == NULL || new == NULL || *alst == NULL)
		return (NULL);
	while ((*alst)->next != NULL)
		alst++;
	(*alst)->next = new;
	new->next = NULL;
	return (*alst);
}
