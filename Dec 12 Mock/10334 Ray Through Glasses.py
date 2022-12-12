from sys import stdin

lst = [1,2]
for i in range(2, 1012):
  lst.append(lst[-1] + lst[-2])
for line in stdin:
  x = int(line)
  print(lst[x])