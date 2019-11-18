/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 19:19:39 by alromero          #+#    #+#             */
/*   Updated: 2019/11/14 20:33:33 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int						i;
	unsigned long long		entero;
	int						signo;

	i = 0;
	entero = 0;
	signo = 1;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = -signo;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		if (entero > __LONG_LONG_MAX__)
			return (signo == -1 ? 0 : -1);
		entero = (entero * 10) + str[i] - 48;
		i++;
	}
	return (entero * signo);
}
