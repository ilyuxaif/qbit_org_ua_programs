a, b, c = input().strip().split()
a, b, c = int(a), int(b), int(c)

# finding max
if (a > b and a > c):
    max = a
elif (b > a and b > c):
    max = b
else:
    max = c

# finding min

if (a < b and a < c):
    min = a
elif (b < a and b < c):
    min = b
else:
    min = c

print(max*max, min*min, sep="\n")