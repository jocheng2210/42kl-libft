/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocheng <jocheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:43:35 by jocheng           #+#    #+#             */
/*   Updated: 2022/06/09 22:48:17 by jocheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	malloc_count(char const *s, char c)
{
	char	*checker;
	int		string_count;

	string_count = 0;
	checker = ft_strdup(s);
	while (*checker != '\0')
	{
		checker = ft_strchr((checker), c);
		string_count++;
		checker++;
	}
	return (string_count);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		ret_i;
	int		ret_j;
	int		s_count;

	ret_i = 0;
	ret_j = 0;
	s_count = 0;
	ret = malloc(sizeof(char) * (ft_strlen(s) + malloc_count(s, c)));
	if (!s || !c || !ret)
		return (NULL);
	if (s[0] == c)
	{
		ret[ret_i][ret_j] = s[s_count];
		ret_j++;
	}
	while (s[s_count] != '\0')
	{
		ret_j = 0;
		if (s[s_count] == c)
		{
			ret_i++;
		}
		ret[ret_i][ret_j] = s[s_count];
		ret_j++;
		s_count++;
	}
	return (ret);
}