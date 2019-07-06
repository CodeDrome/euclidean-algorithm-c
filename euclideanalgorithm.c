#include<stdio.h>
#include<stdlib.h>

//--------------------------------------------------------
// FUNCTION PROTOTYPES
//--------------------------------------------------------
int EuclideanHCF(int a, int b);

//--------------------------------------------------------
// FUNCTION main
//--------------------------------------------------------
int main(int argc, char* argv[])
{
    puts("-----------------------");
    puts("| codedrome.com       |");
    puts("| Euclidean Algorithm |");
    puts("-----------------------\n");

    int avalues[] = {55, 27, 3, 14, 500, 30};
    int bvalues[] = {5, 45, 15, 49, 12, 18};

    for(int i = 0; i < 6; i++)
    {
        int hcf = EuclideanHCF(avalues[i], bvalues[i]);

        printf("HCF of %d and %d = %d\n", avalues[i], bvalues[i], hcf);

        printf("%d / %d = %d\n", avalues[i], hcf, avalues[i] / hcf);

        printf("%d / %d = %d\n\n", bvalues[i], hcf, bvalues[i] / hcf);
    }

    return EXIT_SUCCESS;
}

//--------------------------------------------------------
// FUNCTION EuclideanHCF
//--------------------------------------------------------
int EuclideanHCF(int a, int b)
{
    int temp;

    while(b != 0)
    {
        temp = b;

        b = a % b;

        a = temp;
    }

    return a;
}
