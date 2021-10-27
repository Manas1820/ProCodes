/*Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.*/

#include <iostream>
#include <climits>

using namespace std;

int reverse(int x)
{
    long res = 0;
    while (x)
    {
        res = res * 10 + x % 10;
        x /= 10;
    }
    if (res > INT_MAX || res < INT_MIN)
        return 0;
    return res;
}

int main()
{
    int x;
    cin >> x;
    int ans = reverse(x);
    cout << ans;
    return 0;
}