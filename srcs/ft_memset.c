/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:43:14 by lorampon          #+#    #+#             */
/*   Updated: 2021/11/04 14:25:16 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int value, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		*(int *)ptr = value;
		ptr++;
		i++;
	}
	return (ptr);
}
