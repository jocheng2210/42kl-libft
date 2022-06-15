/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocheng <jocheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:43:35 by jocheng           #+#    #+#             */
/*   Updated: 2022/06/15 22:34:32 by jocheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	words;
	int	s_count;

	words = 0;
	s_count = 0;
	while (s[s_count] == c && s[s_count] != '\0')
	{
		s_count++;
	}
	while (s[s_count] != '\0')
	{
		words++;
		while (s[s_count] != c && s[s_count] != '\0')
		{
			s_count++;
		}
		while (s[s_count] == c && s[s_count] != '\0')
		{
			s_count++;
		}
	}
	words++;
	return (words);
}

int	count_char(char const *s, char c)
{
	int	letter;
	int	s_count;

	letter = 0;
	s_count = 0;
	while (s[s_count] != c && s[s_count] != '\0')
	{
		letter++;
		s_count++;
	}
	letter++;
	return (letter);
}

char	**ft_split(char	const *s, char c)
{
	int		i;
	int		j;
	char	**ret;

	i = 0;
	if (!s)
		return (NULL);
	ret = malloc(sizeof(char *) * count_words(s, c));
	if (!ret || !s)
		return (NULL);
	while (*s == c && *s != '\0')
		s++;
	while (*s != '\0')
	{
		j = 0;
		if (*s != c)
			ret[i] = malloc(sizeof(char) * count_char(s, c));
		while (*s != c && *s != '\0')
			ret[i][j++] = *s++;
		ret[i++][j] = '\0';
		while (*s == c && *s != '\0')
			s++;
	}
	ret[i] = 0;
	return (ret);
}

/*
int main()
{
	char	str[] = "aaacaababcabcdabcdeabcdeabcdef";
	char	**ret;
	char	c = 'a';
	int		i;
	
    i = 0;
    ret = ft_split(str, c);
    while (ret[i] != '\0')
    {
        printf("%s\n", ret[i]);
        i++;
    }
}*/