/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdessel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:20:31 by abdessel          #+#    #+#             */
/*   Updated: 2025/10/19 16:20:31 by abdessel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_reverse_print(char *tab, int len, int fd)
{
	int	i;

	i = len - 1;
	while (i >= 0)
	{
		ft_putchar_fd(tab[i], fd);
		i--;
	}
}

static int	ft_convert_to_str(unsigned int number, char *tab)
{
	int	i;

	i = 0;
	while (number > 0)
	{
		tab[i] = number % 10 + '0';
		number /= 10;
		i++;
	}
	tab[i] = '\0';
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;
	char			tab[11];
	int				len;

	if (fd < 0)
		return ;
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number = -n;
	}
	else
		number = n;
	len = ft_convert_to_str(number, tab);
	ft_reverse_print(tab, len, fd);
}
