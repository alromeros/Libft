/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 20:07:12 by alromero          #+#    #+#             */
/*   Updated: 2019/11/12 19:14:19 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src,
size_t distsize)
{
	const char	*l;
	char		*new;

	new = dst + distsize;
	l = src;
	if (dst == NULL && src == NULL)
		return (0);
	while (*l != '\0' && dst < new)
	{
		*dst++ = *l++;
	}
	if (dst < new)
	{
		*dst = 0;
	}
	else if (distsize > 0)
	{
		dst[-1] = 0;
	}
	while (*l != '\0')
	{
		l++;
	}
	return (l - src);
}
