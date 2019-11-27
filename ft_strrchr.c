/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:47:12 by agomez-o          #+#    #+#             */
/*   Updated: 2019/11/27 13:29:31 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int longitud;
	int flag;

	flag = 0;
	longitud = ft_strlen(str);
	while (longitud >= 0 && flag == 0)
	{
		if (str[longitud] == c)
		{
			return ((char*)&str[longitud]);
			flag = 1;
		}
		longitud--;
	}
	return (NULL);
}
