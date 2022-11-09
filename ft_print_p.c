/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:33:09 by houmanso          #+#    #+#             */
/*   Updated: 2022/11/10 00:42:00 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_p(size_t addr, size_t *len)
{
	ft_print_str("0x", len);
	ft_print_hex(addr, "0123456789abcdef", len);
}
