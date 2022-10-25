/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:41:44 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/09/19 13:08:52 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *str, const char *search, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (search[0] == '\0')
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == search[j] && (i + j) < len)
		{
			if (!(str[i + j] && search[j]))
				return ((char *)&str[i]);
		}
		if (!(search[j]))
			return ((char *)str + i);
		i++;
	}
	return (0);
}
