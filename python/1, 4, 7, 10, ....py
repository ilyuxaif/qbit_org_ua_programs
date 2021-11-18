n = int(input())
array = []
i = 0
while len(array) < n:
    if i % 3 == 1:
        array.append(i)
        print(i, end=' ')
    i = i + 1
