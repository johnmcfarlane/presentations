#include <cstdio>
#include <cstdlib>

int main()
{
    // allocate an int and assign to pointer-to-void
    void* allocation = std::malloc(1);

    // assign to pointer-to-int
    int* pointer = static_cast<int*>(allocation);

    // initialize int with zero
    pointer = 0;

    // increment int
    pointer += 42;

    // print int
    std::printf("%d\n", pointer);
}
