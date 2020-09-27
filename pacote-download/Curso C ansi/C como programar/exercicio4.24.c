#include <stdio.h>
int main(void){
    int i = 1;
    int j = 2;
    int k = 3;
    int m = 2;

    /* a */ printf("a) %d\n", i == 1);
    /* b */ printf("b) %d\n", j == 3);
    /* c */ printf("c) %d\n", i >= 1 && j < 4);
    /* d */ printf("d) %d\n", m <= 99 && k < m);
    /* e */ printf("e) %d\n", j >= i || k == m);
    /* f */ printf("f) %d\n", k + m < j || 3 - j >= k);
    /* g */ printf("g) %d\n", !m);
    /* h */ printf("h) %d\n", !(j - m));
    /* i */ printf("i) %d\n", !(k > m));
    /* j */ printf("j) %d\n", !(j > k));


}
