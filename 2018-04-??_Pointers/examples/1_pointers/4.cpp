// uninitialized reference (prevented)

int main()
{
    int number = 41;
    int& reference = number;    // cannot fail to initialize
    ++ reference;
    return reference;
}
