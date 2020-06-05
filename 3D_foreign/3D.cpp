#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string str;
    cin >> str;
    if (str.length() > 2)
    {
        for (int i = 0; i < str.length() - 1 - 1; i++)
        {
            if (str[i] == '0')
            {
                cout << "YES" << endl << "0";
                return 0;
            }
            if ((str[i] - '0') % 8 == 0)
            {
                cout << "YES" << endl << str[i];
                return 0;
            }
            else
            {
                for (int j = i + 1; j < str.length() - 1; j++)
                {
                    if (str[j] == '0')
                    {
                        cout << "YES" << endl << "0";
                        return 0;
                    }
                    string s = "";
                    s = s + str[i] + str[j];
                    if ((std::stoi(s)) % 8 == 0)
                    {
                        cout << "YES" << endl << s;
                        return 0;
                    }
                    for (int k = j + 1; k < str.length(); k++)
                    {
                        if (str[k] == '0')
                        {
                            cout << "YES" << endl << "0";
                            return 0;
                        }
                        string s = "";
                        s = s + str[i] + str[j] + str[k];
                        if ((std::stoi(s)) % 8 == 0)
                        {
                            cout << "YES" << endl << s;
                            return 0;
                        }
                        s = "";
                        s = s + str[i] + str[k];
                        if ((std::stoi(s)) % 8 == 0)
                        {
                            cout << "YES" << endl << s;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    else
    {
        if (str.length() == 1)
        {
            if (std::stoi(str) % 8 == 0)
            {
                cout << "YES" << endl << str;
                return 0;
            }
            else
            {
                cout << "NO";
                return 0;
            }
        }
        else
        {
            if ((str[0] - '0') % 8 == 0)
            {
                cout << "YES" << endl << str[0];
                return 0;
            }
            if ((str[1] - '0') % 8 == 0)
            {
                cout << "YES" << endl << str[1];
                return 0;
            }
            if (std::stoi(str) % 8 == 0)
            {
                cout << "YES" << endl << str;
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
