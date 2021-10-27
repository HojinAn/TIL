# 10814
# import sys
# n=int(sys.stdin.readline())
# member_list=[]
# for _ in range(n):
#     age, name = map(str, sys.stdin.readline().split())
#     age=int(age)
#     member_list.append((age, name))
# member_list.sort(key=lambda x: x[0])
# for age, name in member_list:
#     print(age, name)





#18879
# import sys
# input=sys.stdin.readline
# n=int(input())
# x_list=list(map(int, input().split()))
# x_sort=sorted(set(x_list))
# x_dict={i:value for value, i in enumerate(x_sort)}
# for x in x_list:
#     print(f'{x_dict[x]} ', end='')

# import sys
# input=sys.stdin.readline
# n=int(input())
# x_list=list(map(int, input().split()))
# x_sort=sorted(set(x_list))
# x_dict={x_sort[i]:i for i in range(len(x_sort))}
# for x in x_list:
#     print(x_dict[x], end=' ')





#15649
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


# n, m = map(int, input().split())
# visited=[False]*n #탐사 여부 check
# out=[]# 출력하기위한 리스트
# def bt(depth, n, m):
#     if depth == m:#탈출조건(recursion은 항상 탈출조건이 있어야 한다.)
#         print(' '.join(map(str, out)))#list 내용들을 묶어서 출력
#         return
#     for i in range(len(visited)):#visited를 한바퀴 돌면서
#         if not visited[i]:#visit되지 않았으면 이하 실행
#             visited[i]=True#visit 시작
#             out.append(i+1)#dfs는 stack을 이용하므로 집어넣기 어차피 이 stack list는 전역으로 언되어 있다.
#             bt(depth+1,n,m)
#             visited[i]=False#수행해줬으니 원상복귀 시키고
#             out.pop() #넣어서 수행했으니 stack도 원상복귀
# bt(0,n,m)#depth = 0 부터 백트래킹 시작


#이하 permutations 이용
# from itertools import permutations
# import sys
# n,m=map(int,sys.stdin.readline().split())
# list_of_n = [str(i) for i in range(1,n+1)]
# for num in list(permutations(list_of_n,m)):
#     print(" ".join(num))








#15650
# from itertools import combinations 
# import sys
# n,m=map(int,sys.stdin.readline().split())
# list_of_n = [str(i) for i in range(1,n+1)]
# for num in list(combinations(list_of_n,m)):
#     print(" ".join(num))


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









#15651
# n, m = map(int,input().split())
# list_for_print=[]
# def bt():
#     if len(list_for_print) == m:
#         print(' '.join(map(str, list_for_print)))
#         return
#     for i in range(1,n+1):
#         list_for_print.append(i)
#         bt()
#         list_for_print.pop()
# bt()












#15652
# n, m = map(int, input().split())
# visited=[False]*n
# out=[]
# def bt(n, m, depth, start):
#     if len(out) == m:
#         print(' '.join(map(str, out)))
#         return
#     for i in range(start, n):
#         out.append(i+1)
#         bt(n,m,depth+1,i)
#         out.pop()
# bt(n,m,0,0)








n=int(input())
for i in range(n,0,-1):
    print('*'*i)


