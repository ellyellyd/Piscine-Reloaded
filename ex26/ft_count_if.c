/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 21:53:00 by fcatina           #+#    #+#             */
/*   Updated: 2019/04/10 22:48:30 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		l;

	i = 0;
	l = 0;
	while (tab[i])
	{
		(f(tab[i]) == 1) ? (l++) : (l);
		i++;
	}
	return (l);
}