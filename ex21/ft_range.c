/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:46:58 by fcatina           #+#    #+#             */
/*   Updated: 2019/04/09 19:13:20 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*res;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	else
		res = (int *)malloc(sizeof(int) * (max - min + 1));
	while (i <= (max - min))
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
