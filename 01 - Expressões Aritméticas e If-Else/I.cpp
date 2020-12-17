#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    int c, o, l, x;
    int hour, minute, second;
    int multiplier = 1;

    cin >> c >> o >> l >> x;

    c /= 4; o /= 8; l /= 2; x /= 1;

    if (c <= o && c <= l && c <= x) {
        multiplier = c;
    } else if (o <= c && o <= l && o <= x){
        multiplier = o;
    } else if (l <= c && l <= o && l <= x) {
        multiplier = l;
    } else {
        multiplier = x;
    }

    second = 1259 * multiplier;

    hour = second / 3600;
    second %= 3600;
    minute = second / 60;
    second %= 60;

    cout << hour << " h " << minute << " m " << second << " s";

    return 0;
}