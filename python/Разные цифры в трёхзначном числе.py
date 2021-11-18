array = []
for _ in range(5):
    array.append(input())
flag = 0
for i in range(5):
    a = list(array[i])
    flag = len(set(a)) == len(a)
    if (flag):
        print("YES",end='\n')
    else: print("NO", end='\n')