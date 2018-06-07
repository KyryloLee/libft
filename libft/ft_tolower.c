/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 12:27:35 by klee              #+#    #+#             */
/*   Updated: 2017/11/03 14:19:38 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (i + 'a' - 'A');
	return (i);
}