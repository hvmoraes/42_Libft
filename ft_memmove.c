/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.pt>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:46:01 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/11/04 11:25:01 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

/*int main()
{
	
}*/
