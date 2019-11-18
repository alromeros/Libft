/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 20:06:58 by alromero          #+#    #+#             */
/*   Updated: 2019/11/13 19:20:52 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*str;
	const char	*str2;
	size_t		hola;

	hola = 0;
	str = (char *)dst;
	str2 = (char *)src;
	if (dst == src || !len)
		return (dst);
	if (dst > src)
	{
		while (++hola <= len)
			str[len - hola] = str2[len - hola];
	}
	else
		while (len--)
			*(str++) = *(str2++);
	return (dst);
}
