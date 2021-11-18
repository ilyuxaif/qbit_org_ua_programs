array = []
for _ in range(5):
    array.append(int(input()))
for i in range(5):
    if array[i] % 2 != 0 or (99 < array[i] < 1000 and array[i] > 0):
        print("YES", sep='\n')
    else:
        print("NO", sep='\n')