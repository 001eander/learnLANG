i = int(input())
while True:
  b, c = 0, 0
  for j in range(1, i):
    if i % j == 0:
      b += j
  for j in range(1, b):
    if b % j == 0:
      c += j
  if i == c and i != b:
    print(i, b)
    break
  i += 1