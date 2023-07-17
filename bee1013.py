a, b, c = input().split()
a, b, c = int(a), int(b), int(c)

MaiorAB = (a + b +abs(a - b))/2
MaiorABC = (MaiorAB + c + abs(MaiorAB - c)) / 2
MaiorABC = int(MaiorABC)
print(MaiorABC, "eh o maior")