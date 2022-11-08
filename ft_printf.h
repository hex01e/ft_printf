/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 02:31:07 by houmanso          #+#    #+#             */
/*   Updated: 2022/11/08 18:13:08 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

int	ft_printf(const char *s, ...);

void	ft_print_hex(unsigned int n, char *base, size_t *len);
void	ft_print_str(char *s, size_t *len);
void	ft_print_char(char c, size_t *len);
void	ft_print_nbr(int n, size_t *len);

#endif