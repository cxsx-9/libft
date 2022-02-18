#include <stdio.h>
#include "libft.h"
#include <string.h>

int main(int ac, char** av)
{
    if (ac == 1)
        printf("Not Found : ");
    else if (ft_isalnum(av[1][0]))
        printf("%c : isalnum\n",av[1][0]);
    else
        printf("not alnum\n");
}

// int main()
// {
//     int x = 0;
//     while (x < 16)
//     {
//         char dest[] = "oooooooooooo";
//         const char src[]  = "----------";
//         char str[100] = "-234567890";
//         char *first, *second;
//         first = str;
//         second = str;

//         char dest1[] =  "oooooooooooo";
//         const char src1[]  = "----------";
    
//         printf("\n\nx >>> [%d]\n",x);

//         printf("\nBefore R memmove dst   (12) = %s\n", dest);
//         memmove(dest, src, x);
//         printf("After  R memmove dst        = %s\n", dest);

//         printf("\nBefore C memmove dst   (12) = %s\n", dest1);
//         ft_memmove(dest1, src1, x);
//         printf("After  c memmove dst        = %s\n\n", dest1);

//         x++;

//     }
// }