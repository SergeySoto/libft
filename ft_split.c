/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoto-su <ssoto-su@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:56:25 by ssoto-su          #+#    #+#             */
/*   Updated: 2025/05/12 21:36:59 by ssoto-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
 }
static int	word_count(char const *s, char c)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	flag = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		if (s[i] == c)
		{
			flag = 0;
		}
		i++;
	}
	return (count);
}
	
	char **create_assface(int wc)
{
	char **str;
	
	str = (char **)ft_calloc(wc + 1, sizeof(char *));
	if (!str)
	{
		free(str);
		return (NULL);
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int	i;
	int	flag;
	int count;
	
	i = -1;
	count = 0;
	flag = 0;

	if (!s)
		return (NULL);
	array = create_assface(word_count(s, c));
	if (!array)
	{
		free(array);
		return (NULL);
	}
	while(s[++i] != '\0')
	{
		if (s[i] != c && flag == 0)
		{
			array[count] = ft_substr(&s[i], 0, word_len(&s[i], c));
			if (!array[count])
			{
				free(array[count]);
				return (NULL);
			}
			count++;
			flag = 1;
		}
		if (s[i] == c)
		{
			flag = 0;
		}
	}
	return (array);
} 
