/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskin <taskinnibrahim@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:31:36 by itaskin           #+#    #+#             */
/*   Updated: 2022/02/06 18:40:19 by itaskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int str)
{
	if (str >= 32 && str <= 126)
		return (1);
	return (0);
}