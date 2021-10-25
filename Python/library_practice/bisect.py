import bisect

a = [1, 2, 4, 4, 8]
x = 4
print(bisect.bisect_left(a, x))#a[2]에 들어가니까 index로 2 반환
print(bisect.bisect_right(a, x))#a[4]에 들어가니까 index로 4 반환

# list 원소 중에 값이 [left_value, right_value]인 데이터의 개수를 반환하는 함수를 구하는데 이용될 수 있다.
#아래의 count_by_range는 O(NlogN)의 시간복잡도
def count_by_range(array, left_value, right_value):
    right_index = bisect.bisect_right(array, right_value)
    left_index = bisect.bisect_left(array, left_value)
    return right_index - left_index
# 리스트 선언
sorted_list = [1, 2, 3, 3, 3, 3, 4, 4, 8, 9]
# 값이 4인 데이터 개수 출력
print(count_by_range(sorted_list, 4, 4))#2
# 값이 [-1, 3] 범위에 있는 데이터 개수 출력
print(count_by_range(sorted_list, -1, 3))#6