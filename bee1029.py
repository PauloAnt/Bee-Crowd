call = [1, 1]
f = [0, 1]

for i in range(2, 41):
    call.append(call[i-1] + call[i-2] + 1)
    f.append(f[i-1] + f[i-2])
    
qnt = int(input())

for i in range(qnt):
    n = int(input())
    print(f"fib({n}) = {call[n] - 1} calls = {f[n]}")
