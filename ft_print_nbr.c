/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:27:12 by houmanso          #+#    #+#             */
/*   Updated: 2022/11/10 00:41:57 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr(long n, size_t *len)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_print_char('-', len);
		nbr *= -1;
	}
	if (nbr >= 10)
		ft_print_nbr(nbr / 10, len);
	ft_print_char(nbr % 10 + '0', len);
}
