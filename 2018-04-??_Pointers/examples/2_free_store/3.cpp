#include <cstdio>
#include <cstdlib>

int main()
{
    // allocate an int and assign to pointer-to-void
    void* allocation = new int;

    // assign to pointer-to-int
    int* pointer = static_cast<int*>(allocation);

    // initialize pointer -- not int -- with zero (i.e. NULL)
    pointer = 0;

    // increment pointer -- not int
    pointer += 42;

    // print pointer -- not int
    std::printf("%d\n", pointer);
}
