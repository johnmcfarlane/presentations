#include <cstdio>
#include <cstdlib>

int main()
{
    // allocate an int, initialize it and assign to pointer-to-void
    void* allocation = new int{0};

    // assign to pointer-to-int
    int* pointer = static_cast<int*>(allocation);




    // increment pointer -- not int
    pointer += 42;

    // print pointer -- not int
    std::printf("%d\n", pointer);
}
