/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:27:12 by houmanso          #+#    #+#             */
/*   Updated: 2022/11/08 18:16:17 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr(int n, size_t *len)
{
	char	nc;
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_print_char('-', len);
		nbr *= -1;
	}
	if (nbr >= 10)
		ft_print_char(nbr / 10, len);
	nc = nbr % 10 + '0';
	ft_print_char(nc, len);
}