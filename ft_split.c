/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 21:22:25 by conradv2          #+#    #+#             */
/*   Updated: 2024/12/28 23:13:30 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**split_s;
	char	*new_token;
	int		token_count;
	int		token_index;
	int		token_start;
	int		token_length;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	token_count = 0;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			token_count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	split_s = (char **)malloc((token_count + 1) * sizeof(char *));
	if (split_s == NULL)
		return (NULL);
	token_index = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			token_start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			token_length = i - token_start;
			new_token = (char *)malloc((token_length + 1) * sizeof(char));
			if (new_token == NULL)
			{
				while (j < token_index)
				{
					free(split_s[j]);
					j++;
				}
				free(split_s);
				return (NULL);
			}	
			ft_memcpy(new_token, s + token_start, token_length);
			new_token[token_length] = '\0';
			split_s[token_index] = new_token;
			token_index++;
		}
	}
	split_s[token_index] = NULL;
	return (split_s);
}
