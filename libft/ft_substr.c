/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:20:04 by oumali            #+#    #+#             */
/*   Updated: 2021/11/08 12:39:10 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*static char *cpystr(char const str, unsigned int start, int len)
{
    int b;
    int a;
    char *sub;

    b = 0;
    a = start;
    sub = (char *)malloc(len + 1 * sizeof(char));
    while(b != len)
        sub[b++] = str[a++]; 
    sub[b] = '\0';
    return (sub);
}*/

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
    size_t	b;
	char	*sub;
    
    a = 0;
    b = 0;
    if(s == NULL) 
        return NULL;
    if(start >= ft_strlen(s))
		return (ft_strdup(""));
	if(len > ft_strlen(s))
		len = ft_strlen(s) - start;	
    sub = (char *)malloc(len + 1 * sizeof(char));
    if(sub == NULL) 
        return NULL;
    while(s[a] != '\0')
    {
        if(a == start)
        {
            while(b != len)     
                sub[b++] = s[a++];
        sub[b] = '\0';
        return (sub);
        //cpystr(*s,start,len);
        }
        a++;
    }
    return NULL;
}
