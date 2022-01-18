import sys
input=sys.stdin.readline
n, m, r = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]

for _ in range(r):
  for i in range(n//2):
    temp = arr[i][i]
    boundary_x = n - i - 1
    boundary_y = m - i - 1
    for r in range(i, boundary_y):
      arr[i][r] = arr[i][r+1]
    for d in range(i, boundary_x):
      arr[d][boundary_y] = arr[d+1][boundary_y]
    for l in range(boundary_y, i, -1):
      arr[boundary_x][l] = arr[boundary_x][l-1]
    for u in range(boundary_x, i, -1):
      arr[u][i] = arr[u-1][i]
    arr[i+1][i] = temp

for line in arr:
  for el in line:
    print(el, end = ' ')
  print()