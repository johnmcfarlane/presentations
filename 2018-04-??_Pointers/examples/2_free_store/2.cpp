#include <cstdio>
#include <cstdlib>

int main()
{
    // allocate a byte and assign to pointer-to-void
    void* allocation = std::malloc(1);

    // assign to pointer-to-int ... to one byte!
    int* pointer = static_cast<int*>(allocation);

    // initialize pointer -- not int -- with zero (i.e. NULL)
    pointer = 0;

    // increment pointer -- not int
    pointer += 42;

    // print pointer -- not int
    std::printf("%d\n", pointer);
}
