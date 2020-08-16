#include <stdio.h>
 #pragma warning(disable:4996)

#include <stdio.h>

double sqrt(double a)
{
    double x = 2;

    for (int i = 0; i < 10; i++)
    {
        x = (x + (a / x)) / 2;
    }

    return x;
}

void main()
{
    double a;

    scanf("%lf",&a);

    double result = sqrt(a);

    printf("%.0f", result);

}

/*============= Make sqrt() function =============================*/