#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    if (str.length() <= 2)
    {
        int number = std::stoi(str);
        if (number % 4 == 0)
        {
            cout << 4;
            return 0;
        }
        else
        {
            cout << 0;
            return 0;
        }
    }
    else
    {
        int num1 = str[str.length() - 1] - '0';
        int num2 = str[str.length() - 2] - '0';
        if (num1 == 0 && num2 == 0)
        {
            cout << 4;
            return 0;
        }
        int num = num1 + 10 * num2;
        if (num % 4 == 0)
        {
            cout << 4;
            return 0;
        }
        cout << 0;
        return 0;
    }
}
