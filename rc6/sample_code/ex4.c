#include <stdio.h>

int main()
{
    int m = 5, n = 2;
    int *p;
    int **pp;

    // Display addresses of m and n
    printf("Address of m: %p\n", (void *)&m);
    printf("Address of n: %p\n", (void *)&n);

    // Point p to m and display p and *p
    p = &m;
    printf("Pointer p points to address: %p, Value at *p: %d\n", (void *)p, *p);

    // Point pp to p and display pp and **pp
    pp = &p;
    printf("Pointer pp points to address: %p, Value at **pp: %d\n", (void *)pp, **pp);

    // Make p point to n and display p, *p, pp, and **pp
    p = &n;
    printf("Pointer p now points to address: %p, Value at *p: %d\n", (void *)p, *p);
    printf("Pointer pp still points to address: %p, Value at **pp: %d\n", (void *)pp, **pp);

    // Attempt to set p to m and pp to n
    p = &m;
    // This would be invalid in C as pp needs to point to a pointer, not an int
    // Uncommenting the following line would cause a compilation error
    // pp = &n;

    printf("Pointer p points to address: %p, Pointer pp cannot be assigned to int variable n\n", (void *)p);

    return 0;
}
