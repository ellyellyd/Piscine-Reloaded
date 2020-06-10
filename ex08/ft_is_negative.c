/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 20:08:52 by fcatina           #+#    #+#             */
/*   Updated: 2019/04/07 20:56:13 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	int		*ptr;

	ptr = &n;
	if (ptr[0] < 0)
		ft_putchar('N');
	else if (ptr[0] >= 0)
		ft_putchar('P');
	else
		return ;
}
