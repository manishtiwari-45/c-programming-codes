#include <stdio.h>

int main() {

    /* -------- int -------- */
    int a = 10;
    int *ap = &a;

    printf("INT\n");
    printf("before address: %p\n", (void *)ap);
    printf("before value  : %d\n", *ap);

    ap = ap + 1;

    printf("after address : %p\n", (void *)ap);
    printf("after value   : %d  (garbage)\n\n", *ap);


    /* -------- float -------- */
    float f = 4.5f;
    float *fp = &f;

    printf("FLOAT\n");
    printf("before address: %p\n", (void *)fp);
    printf("before value  : %f\n", *fp);

    fp = fp + 1;

    printf("after address : %p\n", (void *)fp);
    printf("after value   : %f  (garbage)\n\n", *fp);


    /* -------- long -------- */
    long l = 100;
    long *lp = &l;

    printf("LONG\n");
    printf("before address: %p\n", (void *)lp);
    printf("before value  : %ld\n", *lp);

    lp = lp + 1;

    printf("after address : %p\n", (void *)lp);
    printf("after value   : %ld  (garbage)\n\n", *lp);


    /* -------- double -------- */
    double d = 89.0;
    double *dp = &d;

    printf("DOUBLE\n");
    printf("before address: %p\n", (void *)dp);
    printf("before value  : %lf\n", *dp);

    dp = dp + 1;

    printf("after address : %p\n", (void *)dp);
    printf("after value   : %lf  (garbage)\n\n", *dp);


    /* -------- char -------- */
    char ch = 'a';
    char *cp = &ch;

    printf("CHAR\n");
    printf("before address: %p\n", (void *)cp);
    printf("before value  : %c\n", *cp);

    cp = cp + 1;

    printf("after address : %p\n", (void *)cp);
    printf("after value   : %c  (garbage)\n\n", *cp);

    return 0;
}
