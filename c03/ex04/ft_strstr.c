/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleciprian <aciprian@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 21:24:45 by aleciprian        #+#    #+#             */
/*   Updated: 2025/02/27 21:24:45 by aleciprian       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    if (*to_find == '\0')
    {
        return (str);
    }

    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] != '\0' && str[i + j] == to_find[j])
        {
            j++;
        }
        if (to_find[j] == '\0')
        {
            return (&str[i]);
        }
        i++;
    }
    return (0);
}
