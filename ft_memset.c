/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 20:07:02 by alromero          #+#    #+#             */
/*   Updated: 2019/11/11 20:34:44 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char		*new;
	size_t		n;

	new = (char *)b;
	n = 0;
	while (len != 0)
	{
		new[n] = c;
		n++;
		len--;
	}
	return (b);
}
