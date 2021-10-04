/*Write a function that reverses a string. The input string is given as an array of characters "s". */

/*  Difficulty: Easy   

vector<arr>
*/

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

void reverseString(vector<char> &s)
{
    int i = 0, j = s.size()-1;
    while(i < j)
    {
        swap(s[i++],s[j--]);
    }
    for (char x : s)
        cout << x << " ";
}

int main()
{
    vector<char> arr = {'h', 'e', 'l', 'l', 'o'};
    reverseString(arr);
    return 0;
}