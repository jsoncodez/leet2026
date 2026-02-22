class Solution:
    def isPalindrome(self, x: int) -> bool:

        print(x)
        a = 0
        b = len(str(x)) - 1

        digit = str(x)[0]
        print(f"this is single digit =", str(x)[0])
        add = 1 + int(digit)

        print(f"add = {add}")

        print(a)
        print(b)

        strnum=str(x)
        print(f"strnum a = ", strnum[a])

        while a < b:

            if strnum[a] == strnum[b]:
                print("matches")
                a+=1
                b-=1
            else:
                print("not matches - not a palendrum")
                return False




        return True






x = 1211

ans = Solution().isPalindrome(x)

print(ans)
