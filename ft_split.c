/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdessel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:36:03 by abdessel          #+#    #+#             */
/*   Updated: 2025/10/19 19:36:03 by abdessel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_sniffer(const char *s, char c)
{
	int	count;
	int	i;
	int	in_word;

	count = 0;
	i = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static void	make_it_empty(char **arr, int i)
{
	while (i--)
		free(arr[i]);
	free(arr);
}

static int	get_next_word_info(char const *s, char c, int *start_index)
{
	int	i;
	int	len;

	i = *start_index;
	while (s[i] && s[i] == c)
		i++;
	*start_index = i;
	if (s[i] == '\0')
		return (0);
	len = 0;
	while (s[i + len] != c && s[i + len])
		len++;
	return (len);
}

static char	**add_words(char **arr, const char *s, char c, int arr_len)
{
	int	i;
	int	start;
	int	len;

	i = 0;
	start = 0;
	while (i < arr_len)
	{
		len = get_next_word_info(s, c, &start);
		if (len == 0)
			break ;
		arr[i] = ft_substr(s, start, len);
		if (!arr[i])
		{
			make_it_empty(arr, i);
			return (NULL);
		}
		start += len;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char		**arr;
	int			t_len;

	if (!s)
		return (NULL);
	t_len = word_sniffer(s, c);
	arr = malloc(sizeof(char *) * (t_len + 1));
	if (!arr)
		return (NULL);
	if (!add_words(arr, s, c, t_len))
		return (NULL);
	return (arr);
}
