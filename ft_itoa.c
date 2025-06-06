/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoto-su <ssoto-su@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:24:08 by ssoto-su          #+#    #+#             */
/*   Updated: 2025/05/13 17:14:34 by ssoto-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_num(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*alloc_mem(int num)
{
	char	*str;
	int		n;

	n = count_num(num);
	str = ft_calloc(n + 1, sizeof(char));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	num;

	num = n;
	str = alloc_mem(n);
	if (!str)
		return (NULL);
	len = count_num(n);
	str[len--] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
