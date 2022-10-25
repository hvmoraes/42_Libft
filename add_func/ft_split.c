/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:46:42 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/10/25 09:00:57 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	count_words(char *str, char c)
{
	int	i;
	int	total;

	i = 0;
	total = 1;
	while (str[i])
	{
		if (str[i] == c)
		{
			total++;
			i++;
		}
		i++;
	}
	return (total);
}

char	*get_word(char *str, int start, int end)
{
	char	*result;
	int		i;

	i = 0;
	result = (char *)malloc(sizeof(char) * (end - start + 1));
	while (start < end)
	{
		result[i] = str[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split(char const *str, char c)
{
	char	**result;
	int		index;
	size_t	i;
	size_t	j;

	result = (char **)malloc(sizeof(char *)
			* (count_words((char *)str, c) + 1));
	index = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] != c && index == 0)
			index = i;
		else if ((str[i] == c || i == ft_strlen(str)) && index != 0)
		{
			result[j] = get_word((char *)str, index, i);
			index = 0;
			j++;
		}
		i++;
	}
	result[j] = 0;
	return (result);
}
