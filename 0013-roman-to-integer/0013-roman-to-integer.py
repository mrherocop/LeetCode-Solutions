class Solution:
    def romanToInt(self, s: str) -> int:
        roman_map = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}

        s=s.upper()
        length = len(s)
        add = 0

        for i in range(length):
            if i+1<length:
                if roman_map[s[i]] < roman_map[s[i+1]]:
                    add -= roman_map[s[i]]
                else:
                    add+= roman_map[s[i]]

            else:
                add+=roman_map[s[i]]
        return add