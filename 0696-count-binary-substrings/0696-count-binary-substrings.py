class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        count = 0
        prev_count = 0
        curr_count = 1

        for i in range(1, len(s)):
            if s[i] == s[i-1]:
                curr_count += 1
            else:
                prev_count = curr_count
                curr_count = 1

            if prev_count >= curr_count:
                  count += 1

        return count