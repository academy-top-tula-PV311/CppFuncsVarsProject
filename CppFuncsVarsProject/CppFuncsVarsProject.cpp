#include <iostream>

int Sqr(int n)
{
    return n * n;
}

int Counter()
{
    static int count{ 0 };
    return ++count;
}

int Func()
{
    int n{ 0 };
    return ++n;
}

int main()
{
    for (int i{}; i < 5; i++)
    {
        std::cout << Counter() << "\n";
        std::cout << Func() << "\n";
    }

}
