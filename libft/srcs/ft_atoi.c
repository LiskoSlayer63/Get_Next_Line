/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:58:20 by mahola            #+#    #+#             */
/*   Updated: 2019/10/16 13:08:54 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	unsigned long long	out;
	int					neg;
	int					i;

	out = 0;
	neg = 1;
	i = 0;
	while (str[i] && (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' ||
		str[i] == ' ' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		out = out * 10 + (str[i] - '0');
		i++;
	}
	if (out > 9223372036854775807 && neg == -1)
		return (0);
	else if (out > 9223372036854775807)
		return (-1);
	return (out * neg);
}
