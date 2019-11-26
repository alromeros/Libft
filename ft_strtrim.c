/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:20:22 by alromero          #+#    #+#             */
/*   Updated: 2019/11/20 10:33:56 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		flag_guessing(char const *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i])
		if (s1[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*new;
	size_t	len;
	size_t	k;

	i = 0;
	k = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	while (flag_guessing(set, s1[i]) && s1[i])
		i++;
	while (flag_guessing(set, s1[len - 1]) && (len - 1))
		len--;
	if (len < i)
		len = i;
	new = malloc(len - i + 1);
	if (!new)
		return (NULL);
	while (i < len)
		new[k++] = s1[i++];
	new[k] = '\0';
	return (new);
}
