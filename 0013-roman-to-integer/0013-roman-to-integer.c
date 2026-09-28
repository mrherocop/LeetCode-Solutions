#include <string.h>

int romanToInt(char* s) {
    static const int v[256] = {
        ['I'] = 1,   ['V'] = 5,   ['X'] = 10,  ['L'] = 50,
        ['C'] = 100, ['D'] = 500, ['M'] = 1000
    };

    int total = 0, prev = 0;
    for (int i = (int)strlen(s) - 1; i >= 0; i--) {
        int cur = v[(unsigned char)s[i]];
        if (cur < prev) {
            total -= cur;
        } else {
            total += cur;
            prev = cur;
        }
    }
    return total;
}