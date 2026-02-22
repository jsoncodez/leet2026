class Solution:
    def romanToInt(self, s: str) -> int:

        roman_dict = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000,
        }

        strLength = len(s)

        sum = roman_dict[s[strLength-1]]


        for letter in range(len(s) - 1, 0, -1):

            if roman_dict[s[letter]] <= roman_dict[s[letter-1]]:
                sum += roman_dict[s[letter-1]]
            else:
                sum -= roman_dict[s[letter-1]]

        return 0


'''
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
'''

s = "IV"

ans = Solution().romanToInt(s)
