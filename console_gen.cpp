#include <iostream> // std LIB
#include <random> // Random lib for chosing random chars from the array below
#include <Windows.h> //For setting the console title

using namespace std;

std::string gen_string(const int length)
{
    std::string GeneratedString;
    static const char Alphabet[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"; 
    srand((unsigned)time(NULL) * 5);
    for (int i = 0; i < length; i++) 
        GeneratedString += Alphabet[rand() % (sizeof(Alphabet) - 1)];
    return GeneratedString;
}

int main()
{
    SetConsoleTitleA(gen_string(25).c_str()); // Sets the console title
    cout << gen_string(25).c_str() << '\n'; //out puts the generated string 
    getchar();
}