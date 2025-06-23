class Solution:
    def bintodecimal(self, a: str)->int:
        num = int(a)
        rem = 0
        i = 0
        while num != 0:
            x = num%10
            rem = rem + (x * pow(2,i))
            num //= 10
            i += 1
        return rem
    def addBinary(self, a: str, b: str) -> str:
        num = self.bintodecimal(a)
        num2 = self.bintodecimal(b)
        num3 = bin(num + num2)[2:]
        return str(num3)

a = "1101"
b = "1101"
obj = Solution()
print(obj.addBinary(a,b))

