a, b = input().strip().split()
if int(a) > int(b):
    print(int(a) ** 2, int(b) ** 2, sep='\n')
else:
    print(int(b) ** 2, int(a) ** 2, sep='\n')