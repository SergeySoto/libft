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
		if (&a1 > &a2)
			return (1);
		else if (&a1 < &a2)
			return (-1);
		i++;
	}
	return (0);
}