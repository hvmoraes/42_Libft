/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:32:49 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/10/25 09:05:28 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	i = 0;
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	while (i < len && i < ft_strlen(str))
	{
		result[i] = str[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
