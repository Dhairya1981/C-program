#include <stdio.h>

int main() {
    int a = 5, b=0;

    printf("AND: %d\n", (a>0) && (b>0));
    printf("OR: %d\n",  (a>0)  || (b>0));
    printf("NOT: %d\n", !(a>0));

    if (a>0 && b == 0)
      printf("Both conditions met\n");
      return 0;
}