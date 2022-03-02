#include <stdio.h>
#include "libft.h"
#include <string.h>

// int	count(int n)
// {
// 	int i;

// 	i = 0;
// 	while (n != 0)
//     {
//         printf("%d\n",n);
// 		n = n / 10;
// 		i++;
//     }
// 	return(i);
// }

int main()
{
    char *s = ("abc-def-ghi-jkl");
    printf("%s\n",ft_strrchr(s, '-'));
}

// // ------------ BEST MAIN FOR STRLCAT ------------
// int main()
// {
//     int i = 0;
//     while (i < 15)
//     {
//         char dr[] = "----------";
// 	    char sr[] = "oo";
//         printf("[%d]\n",i);
//         printf("\ndR = %s,  src = %s\n",dr,sr);
//         printf("return : %zu    d%lu (%d + s%lu)\n",ft_strlcat(dr,sr,i),strlen(dr),i,strlen(sr));
//         printf("dR = %s,  src = %s\n\n",dr,sr);
//         printf("-----------------------\n");
//         i++;
//     }
// }