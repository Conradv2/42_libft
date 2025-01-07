/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 13:15:29 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/07 11:11:15 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*handle_special_cases(int _n)
{
	char	*_s;

	if (_n == 0)
	{
		_s = (char *)malloc((1 + 1) * sizeof(char));
		if (_s == NULL)
			return (NULL);
		_s[0] = '0';
		_s[1] = '\0';
		return (_s);
	}
	if (_n == -2147483648)
	{
		_s = (char *)malloc((11 + 1) * sizeof(char));
		if (_s == NULL)
			return (NULL);
		return (ft_memcpy(_s, "-2147483648", 12));
	}
	return (NULL);
}

char	*s_reverse(char *_s)
{
	int		len;
	int		i;
	char	tmp;

	i = 0;
	len = ft_strlen(_s);
	while (i < len / 2)
	{
		tmp = _s[i];
		_s[i] = _s[len - 1 - i];
		_s[len - 1 - i] = tmp;
		i++;
	}
	return (_s);
}

char	*s_fill(char *_s, int _n, int _is_negative)
{
	int	i;

	i = 0;
	if (_is_negative == 1)
		_n *= -1;
	while (_n > 0)
	{
		_s[i] = (_n % 10) + '0';
		_n /= 10;
		i++;
	}
	if (_is_negative == 1)
		_s[i++] = '-';
	_s[i] = '\0';
	s_reverse(_s);
	return (_s);
}

int	digits_count(int n)
{
	int	digit_counter;

	digit_counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		digit_counter++;
		n /= 10;
	}
	return (digit_counter);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		is_negative;
	int		digits_amount;

	is_negative = 0;
	s = handle_special_cases(n);
	if (s != NULL)
		return (s);
	if (n < 0)
		is_negative = 1;
	digits_amount = digits_count(n);
	s = (char *)malloc((digits_amount + 1 + is_negative) * sizeof(char));
	if (s == NULL)
		return (NULL);
	s_fill(s, n, is_negative);
	return (s);
}
