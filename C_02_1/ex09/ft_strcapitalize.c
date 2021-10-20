/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:33:48 by gupark            #+#    #+#             */
/*   Updated: 2021/10/19 10:33:53 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int valid_check(char c)
{
	if( c >= '0' &&  c <= '9')
		return 1;
	if( c >= 'a' && c <= 'z')
		return 1;
	if( c >= 'A' && c <= 'Z')
		return 1;
	return 0;
}

char	*ft_strcaptialize(char *str)
{
    int index;

    index = 0;
    while(str[index])
    {
        if(index == 0 || valid_check(str[index - 1]) == 0)
        {
            if(str[index] >= 'a' && str[index] <= 'z')
                str[index] = str[index] - 32;

        }
        else 
        {
            if(str[index] >= 'A' && str[index] <= 'Z')
                str[index] = str[index] + 32;
        }
        index++;
    }
    return (str);
}