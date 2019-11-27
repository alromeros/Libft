/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 11:42:41 by agomez-o          #+#    #+#             */
/*   Updated: 2019/11/27 13:28:56 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;
	int flag;

	flag = 0;
	i = 0;
	while (((char*)str)[i] != '\0' && flag == 0)
	{
		if (((char*)str)[i] == c)
		{
			return ((char*)&str[i]);
			flag = 1;
		}
		i++;
	}
	if (c == '\0')
		return ((char*)&str[i]);
	return (NULL);
}
