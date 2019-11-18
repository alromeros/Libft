/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 20:07:24 by alromero          #+#    #+#             */
/*   Updated: 2019/11/18 20:33:17 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int leng;

	i = 0;
	leng = ft_strlen(needle);
	if (len == 0 && (needle[0] == '\0' || haystack[0] == '\0'))
		return ((char *)&haystack[len]);
	if (len == 0)
		return (NULL);
	while (haystack[i] != '\0' && len)
	{
		if (ft_strncmp(&haystack[i], needle, leng) == 0 && len >= (size_t)leng)
			return ((char *)&haystack[i]);
		i++;
		len--;
	}
	return (NULL);
}
