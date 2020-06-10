/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 22:44:56 by fcatina           #+#    #+#             */
/*   Updated: 2019/04/07 23:03:02 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	int		l;

	l = 0;
	i = 1;
	while (i < argc)
	{
		while (argv[i][l] != '\0')
		{
			ft_putchar(argv[i][l]);
			l++;
		}
		ft_putchar('\n');
		l = 0;
		i++;
	}
	return (0);
}
