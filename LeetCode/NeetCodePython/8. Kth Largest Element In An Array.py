class Solution:
    def lastStoneWeight(self, array: list[int]) -> int:
        array = [-s for s in array]
        heapq.heapify(array)
        k=1

        while k > 0:
            raqam = heapq.heappop(self.array)
            k-=1

        return abs(raqam)