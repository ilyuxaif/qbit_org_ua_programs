a, b = input().strip().split()
print(  int((int(a) - (int(a) % int(b))) / int(b))  )