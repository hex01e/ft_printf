/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:13:43 by houmanso          #+#    #+#             */
/*   Updated: 2022/11/10 00:46:39 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(char *s, size_t *len)
{
	int	i;

	i = 0;
	if (!s)
		ft_print_str("(null)", len);
	else
		while (s[i])
			ft_print_char(s[i++], len);
}
