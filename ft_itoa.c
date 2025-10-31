/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdessel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:07:27 by abdessel          #+#    #+#             */
/*   Updated: 2025/10/18 11:07:27 by abdessel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_len(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	fill_number(char *str, long num, int pos)
{
	while (num > 0)
	{
		str[pos] = (num % 10) + '0';
		num = num / 10;
		pos--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	if (n == 0)
		return (ft_strdup("0"));
	num = n;
	len = number_len(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	fill_number(str, num, len - 1);
	return (str);
}
