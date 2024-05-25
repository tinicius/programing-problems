import sys

sys.set_int_max_str_digits(5001)

n = int(input())

aux = 0
ans = -1

for i in range(0, n):
    line = input()
    [d, c] = line.split(" ")
    # d = int(input())/
    # c = int(input())

    if(pow(int(d), int(c / 1000)) > aux):
        aux = pow(int(d), int(c / 1000))
        ans = i

print(ans)
