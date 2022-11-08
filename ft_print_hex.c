/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:48:30 by houmanso          #+#    #+#             */
/*   Updated: 2022/11/08 18:51:00 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(size_t n, char *base ,size_t *len)
{
	size_t	nbr;

	nbr = n;
	if (nbr >= 16)
	{
		ft_print_hex(nbr / 16, base, len);
		ft_print_hex(nbr % 16, base, len);
	}
	if (nbr < 16)
		ft_print_char(base[nbr % 16], len);
}