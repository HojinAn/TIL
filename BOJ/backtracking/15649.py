# #15649_1 29200kb 268ms
# import sys, itertools
# n, m = map(int,sys.stdin.readline().split())
# list_for_print=[]#전역변수 리스트 선언

# def bt():
#     if len(list_for_print) == m:#list 길이랑 m이랑 같으면 출력
#         print(' '.join(map(str, list_for_print)))
    
#     for i in range(1, n+1):#1부터 n까지
#         if i in list_for_print:#해당 숫자i가 list 안에 있으면 뒤에 수행 안하고 다시 for문 복귀
#             continue
#         list_for_print.append(i)#if문 통과했으면 해당 i는 list에 추가
#         bt()#다시 함수 수행(list는 어차피 전역으로 되어 있다.)
#         list_for_print.pop()#for문 안에 있는 bt 다 돌아서 출력했으면 다시 다 빼줘야함

# bt()

# 15649_2
from itertools import permutations #itertools 활용
import sys
n,m=map(int,sys.stdin.readline().split())#sys.stdin.readline이 입력이 더 빠르다
list_of_n = [str(i) for i in range(1,n+1)]
for num in list(permutations(list_of_n,m)):
    print(" ".join(num))

