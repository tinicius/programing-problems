t = int(input())

def c(a):
    if int(a) < 10:
        return "0{a}".format(a = a)
    else:
        return a

while t > 0:

    s = str(input())

    h = int(s.split(":")[0])
    m = int(s.split(":")[1])

    # print(s)

    if h == 0:
        print("12:{mm} AM".format(mm = c(m)))
        t = t - 1
        continue

    if h == 12:
        print("{s} PM".format(s = s))
        t = t - 1
        continue

    if h < 12:
        print("{s} AM".format(s = s))
        t = t - 1
        continue

    print("{hh}:{mm} PM".format(hh = c(h - 12), mm = c(m)))
    t = t - 1

   