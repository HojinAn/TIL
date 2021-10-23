#15651 29200kb 1744ms
n, m = map(int,input().split())
list_for_print=[]
def bt():
    if len(list_for_print) == m:
        print(' '.join(map(str, list_for_print)))
        return
    for i in range(1,n+1):
        list_for_print.append(i)
        bt()
        list_for_print.pop()
bt()