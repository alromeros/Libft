/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 20:06:20 by alromero          #+#    #+#             */
/*   Updated: 2019/11/11 20:45:44 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	char		*str;
	size_t		c;

	c = 0;
	str = (char *)s;
	while (n != 0)
	{
		str[c] = '\0';
		c++;
		n--;
	}
	return (s);
}
