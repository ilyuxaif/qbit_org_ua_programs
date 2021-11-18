a, b = input().strip().split()
a, b = int(a), int(b)

m = ((a * 12) + b) * 0.0254

print(f'{a}\'{b}\" = {m:0.2f}m.')