import sys
n=int(sys.stdin.readline())
member_list=[]
for _ in range(n):
    age, name = map(str, sys.stdin.readline().split())
    age=int(age)
    member_list.append((age, name))
member_list.sort(key=lambda x: x[0])
for age, name in member_list:
    print(age, name)