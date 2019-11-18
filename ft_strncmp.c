/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 20:07:21 by alromero          #+#    #+#             */
/*   Updated: 2019/11/12 14:58:34 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	size_t			k;
	unsigned char	*str;
	unsigned char	*str2;

	i = 0;
	k = 1;
	str = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while ((str[i] != '\0' || str2[i] != '\0') && (k <= n))
	{
		if (str[i] != str2[i])
		{
			return (str[i] - str2[i]);
		}
		i++;
		k++;
	}
	return (0);
}
