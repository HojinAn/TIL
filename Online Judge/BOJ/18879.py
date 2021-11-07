
# import sys
# input=sys.stdin.readline
# n=int(input())
# x_list=list(map(int, input().split()))
# x_sort=sorted(set(x_list))
# x_dict={i:value for value, i in enumerate(x_sort)}
# for x in x_list:
#     print(f'{x_dict[x]} ', end='')

import sys
input=sys.stdin.readline
n=int(input())
x_list=list(map(int, input().split()))
x_sort=sorted(set(x_list))
x_dict={x_sort[i]:i for i in range(len(x_sort))}
for x in x_list:
    print(x_dict[x], end=' ')