// reference arithmetic (prevented)

int main()
{
    int number = 41;
    int& reference = number;
    ++ reference;
    return reference;
}
