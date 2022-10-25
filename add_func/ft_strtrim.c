/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:10:38 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/09/20 15:50:15 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	get_size(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	size = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			i++;
			j++;
			size++;
		}
	}
	return (size);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		size;
	int		i;
	int		j;
	int		k;
	char	*result;

	i = 0;
	k = 0;
	size = get_size(s1, set);
	result = (char *)malloc(ft_strlen(s1) - size + 1);
	if (!s1 || !set || !result)
		return (0);
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			i++;
			j++;
		}
		result[k] = s1[i];
		i++;
	}
	result[k] = '\0';
	return (result);
}

/*int	main()
{
	char *string = "Ola tudo bem?";
	char *sep = " ";
	char *result = ft_strtrim(string, sep);
	ft_putstr(result);
}*/
