a = input()
max = ""
a = sorted(list(a), reverse=True)
for a in a: max = max + a
print(int(max))