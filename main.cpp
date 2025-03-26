#include <iostream>
using namespace std;

void say(string s);
int add(int a, int b);

int main()
{
    cout << "Hello World\n";
    cout << "Greeting....\n";
    return 0;
}

void say(string s)
{
    cout << s << endl;
}

int add(int a, int b)
{
    return a + b;
}