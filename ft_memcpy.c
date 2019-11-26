/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 20:06:55 by alromero          #+#    #+#             */
/*   Updated: 2019/11/19 21:29:37 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char *pstr;

	if (dst == NULL && src == NULL)
		return (NULL);
	ptr = (unsigned char *)dst;
	pstr = (unsigned char *)src;
	while (n != 0)
	{
		*ptr = *pstr;
		ptr++;
		pstr++;
		n--;
	}
	return (dst);
}
