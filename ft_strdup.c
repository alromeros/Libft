/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 17:28:00 by alromero          #+#    #+#             */
/*   Updated: 2019/11/16 20:12:40 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *s1)
{
	char	*str;

	str = malloc((ft_strlen(s1) + 1));
	if (str == NULL)
		return (NULL);
	else
		ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	return (str);
}
