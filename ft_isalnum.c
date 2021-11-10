/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:46:48 by lorampon          #+#    #+#             */
/*   Updated: 2021/11/10 14:58:49 by lorampon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(char c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
}
