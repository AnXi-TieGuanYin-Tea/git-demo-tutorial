#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int mIntVar1;
    int *mPonit;

    mIntVar1 = 100;
    mPonit = &mIntVar1;

    printf("mIntVar1 = %d, mPonit = %d\n", mIntVar1, *mPonit);
    printf("Add At Develop Branch mIntVar1 = %d, mPonit = %d\n", mIntVar1, *mPonit);
    printf("Add At Master Branch mIntVar1 = %d, mPonit = %d\n", mIntVar1, *mPonit);

    exit(0);
}
