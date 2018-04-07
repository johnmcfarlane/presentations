// pointer arithmetic (broke)

int main()
{
    int number = 41;
    int* pointer = &number;
    ++ pointer;
    return *pointer;
}
