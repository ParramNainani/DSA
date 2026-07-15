class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        seen = {0:1}
        count = 0
        cs = 0 
        for x in nums:
            cs+=x
            need = cs-k
            if need in seen:
                count += seen[need]
            seen[cs] = seen.get(cs,0) +1 
        return count
        
