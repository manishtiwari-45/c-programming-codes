#include <stdio.h>
/* count characters in input; 1st version */
// int main()
// {
//     long nc;

//     nc = 0;
//     int c;
//     while (getchar() != EOF)
//         ++nc;
//     printf("No. of characters are: %ld\n", nc);

//     return 0;
// }

int main() {
    double nc;
    for(nc = 0;getchar() != EOF; ++nc)
        ;
    printf("No. of characters are: %.0f\n",nc);
}