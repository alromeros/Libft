/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 19:21:15 by alromero          #+#    #+#             */
/*   Updated: 2019/11/19 21:29:27 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dst,
const void *src, int c, size_t n)
{
	unsigned char		*ptr;
	const unsigned char *pstr;
	size_t				count;

	ptr = (unsigned char *)dst;
	pstr = (unsigned char *)src;
	count = 0;
	while (n > 0)
	{
		count++;
		*ptr = *pstr;
		if (*ptr == (unsigned char)c && n != 0)
		{
			return (&dst[count]);
		}
		ptr++;
		pstr++;
		n--;
	}
	return (NULL);
}
