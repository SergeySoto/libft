/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoto-su <ssoto-su@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 20:42:41 by ssoto-su          #+#    #+#             */
/*   Updated: 2025/05/09 21:17:59 by ssoto-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int ft_trimming(char const *s1, char const *set)
{
	unsigned char	front;
	unsigned char	end;
	int	i;

	while (s1[i] == set)
	{
		i++;
	}
	
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] != set[i])
	{
		
	}
}
