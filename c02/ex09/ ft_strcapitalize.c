/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciprian <aciprian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:50:39 by aleciprian        #+#    #+#             */
/*   Updated: 2025/02/27 18:50:39 by aleciprian       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcapitalize(char *str)
{
    int i;
    int new_word;

    i = 0;
    new_word = 1;
    while (str[i] != '\0')
    {
        if (new_word && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
            new_word = 0;
        }
        else if (!new_word && str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else if (!(str[i] >= '0' && str[i] <= '9') &&
                 !(str[i] >= 'A' && str[i] <= 'Z') &&
                 !(str[i] >= 'a' && str[i] <= 'z'))
        {
            new_word = 1;
        }
        else
        {
            new_word = 0;
        }
        i++;
    }
    return (str);
}
