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
    printf("Add At Develop Branch mIntVar1 = %d, mPonit = %d\n", mIntVar1, *mPonit);
    printf("Add At Master Branch mIntVar1 = %d, mPonit = %d\n", mIntVar1, *mPonit);
    printf("Add At Master Branch mIntVar1 = %d, mPonit = %d\n", mIntVar1, *mPonit);
    printf("Add At Master Branch mIntVar1 = %d, mPonit = %d\n", mIntVar1, *mPonit);
    printf("\033[34mAdd At Master Branch mIntVar1 = %d, mPonit = %d\033[0m\n", mIntVar1, *mPonit);
    printf("test");
    printf("revert");

    exit(0);
}
