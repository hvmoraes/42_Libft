/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:02:32 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/10/25 08:47:39 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_signal(int num)
{
	if (num == 0)
		return (0);
	else if (num < 0)
		return (-1);
	else
		return (1);
}

int	get_size(int num)
{
	int	size;

	size = 0;
	while (num > 0)
	{
		size++;
		num /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		size;
	int		i;

	i = 0;
	size = get_size(n);
	if (ft_signal(n) == 0)
		return (0);
	else if (n < 0)
		size++;
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (n < 0)
	{
		result[i] = '-';
		i++;
	}
	while (n > 0)
	{
		result[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	return (result);
}

/*int	main()
{
	int num = 1234;
	char *result = ft_itoa(num);
	for (int i = 0; result[i]; i++)
		ft_putstr(&result[i]);
}*/
