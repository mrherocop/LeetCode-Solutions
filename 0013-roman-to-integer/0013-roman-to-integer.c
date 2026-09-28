static int val(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        default:  return 1000;
    }
}

int romanToInt(char* s) {
    int total = 0;
    for (int i = 0; s[i]; i++) {
        int v = val(s[i]);
        if (s[i + 1] && v < val(s[i + 1]))
            total -= v;
        else
            total += v;
    }
    return total;
}