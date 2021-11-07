# # 15650_1 29200kb 76ms
# n, m = map(int, input().split())
# visited=[False]*n #탐사 여부 check
# out=[]# 출력하기위한 리스트
# def bt(depth, n, m, start):#start 지정해줘서 bt의 시작도 지정 
#     if depth == m:#탈출조건(recursion은 항상 탈출조건이 있어야 한다.)
#         print(' '.join(map(str, out)))#list 내용들을 묶어서 출력
#         return
#     for i in range(start,len(visited)):#visited를 한바퀴 돌면서 다만 앞의 숫자가 뒤의 숫자보다 작이 않기 위해서 start부터 돌린다
#         if not visited[i]:#visit되지 않았으면 이하 실행
#             visited[i]=True#visit 시작
#             out.append(i+1)#dfs는 stack을 이용하므로 집어넣기 어차피 이 stack list는 전역으로 언되어 있다.
#             bt(depth+1,n,m,i+1)#자신의 다음 숫자 부르기
#             visited[i]=False#수행해줬으니 원상복귀 시키고
#             out.pop() #넣어서 수행했으니 stack도 원상복귀
# bt(0,n,m,0)#depth = 0 부터 백트래킹 시작

# 15650_2 29200kb 
from itertools import combinations 
import sys
n,m=map(int,sys.stdin.readline().split())
list_of_n = [str(i) for i in range(1,n+1)]
for num in list(combinations(list_of_n,m)):
    print(" ".join(num))