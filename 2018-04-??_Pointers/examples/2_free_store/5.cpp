#include <cstdio>
#include <cstdlib>

int main()
{
    // allocate an int, initialize it and assign to pointer-to-int
    int* pointer = new int(0);







    // increment int
    pointer += 42;

    // print int
    std::printf("%d\n", pointer);
}
