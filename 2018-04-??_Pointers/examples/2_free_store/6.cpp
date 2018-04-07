#include <cstdio>
#include <cstdlib>

int main()
{
    // allocate an int, initialize it and assign to reference-to-int
    int& reference = *new int(0);







    // increment reference -- not int
    reference += 42;

    // print reference -- not int
    std::printf("%d\n", reference);
}
