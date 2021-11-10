/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:41:34 by lorampon          #+#    #+#             */
/*   Updated: 2021/11/10 11:30:49 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			j = i;
		i++;
	}
	if (j > -1)
		return ((char *)&str[j]);
	return (0);
}