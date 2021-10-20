/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:32:34 by gupark            #+#    #+#             */
/*   Updated: 2021/10/19 10:32:37 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int index;

	index = 0;
	while(str[index])
	{
		if(str[index] < 'a' || str[index] > 'z')
			return (0);
		index++;
	}
	return (1);
}