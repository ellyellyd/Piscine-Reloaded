/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 21:11:55 by fcatina           #+#    #+#             */
/*   Updated: 2019/04/09 16:56:37 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int	res;

	res = 0;
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 13 && nb > 1)
		res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
