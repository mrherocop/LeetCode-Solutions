class Solution:
    def romanToInt(self, s: str) -> int:
        roman_map = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}

        add = 0
        prev_value = 0
        for char in reversed(s.upper()):
            current_value = roman_map[char]
            if current_value<prev_value:
                add-=current_value
            else:
                add+=current_value
            prev_value = current_value
        return add