// pointer arithmetic (fixed)

int main()
{
    int number = 41;
    int* pointer = &number;
    ++ *pointer;
    return *pointer;
}
