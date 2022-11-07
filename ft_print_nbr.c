/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:27:12 by houmanso          #+#    #+#             */
/*   Updated: 2022/11/07 21:45:08 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nbr_len(int n)
{
	int	len;

	len = 0;
	while(n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_print_nbr(int n)
{
	char	nc;
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_print_char('-');
		nbr *= -1;
	}
	if (nbr >= 10)
		ft_print_char(nbr / 10);
	nc = nbr % 10 + '0';
	ft_print_char(nc);
	return (nbr_len(n));
}