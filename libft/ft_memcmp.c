/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoto-su <ssoto-su@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:13:49 by ssoto-su          #+#    #+#             */
/*   Updated: 2025/05/02 20:43:58 by ssoto-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*a1;
	const char	*a2;
	size_t	i;
	
	a1 = (const char *)s1;
	a2 = (const char *)s2;
	i = 0;
	while (i < n)
	{
		if (a1[i] > a2[i])
			return (1);
		else if (a1[i] < a2[i])
			return (-1);
		i++;
	}
	return (0);
}

/*
unsigned char *a1;
unsigned char *a2;

a1 = (unsigned char *)s1;
a2 = (unsigned char *)s2;
while (i menor que n)
{
	if (a1[i] == a2[i])
		i++;
	else
		return (a1[i] - a2[i]);
}
return (0)
*/