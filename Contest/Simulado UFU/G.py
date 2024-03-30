n = int(input())

for i in range(0, n):
    s = str(input())
    
    nums = s.split(" ")

    valid = True

    for i in range(0, len(nums)):
        
        a = (2 * (i + 1)) - 1
        b = ((2 * (i + 1)) + 1) - 1

        if a < len(nums) and int(nums[i]) > int(nums[a]):
            # print(i, a, b)
            valid = False

        if b < len(nums) and int(nums[i]) > int(nums[b]):
            # print(i, a, b)
            valid = False

    if valid:
        print("Sim")
    else:
        print("Nao")
