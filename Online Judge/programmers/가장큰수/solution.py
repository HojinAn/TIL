#my_tries...
#try1 not perfet some answers
# def solution(numbers):
#     sorted1= sorted(numbers, key = lambda x: x//1000, reverse = True)
#     sorted2= sorted(sorted1, key = lambda x: (x%1000)//100, reverse = True)
#     sorted3= sorted(sorted2, key = lambda x: (x%100)//10, reverse = True)
#     sorted4= list(map(str, sorted(sorted3, key = lambda x: x%10, reverse = True)))
#     answer=''.join(sorted4)
#     return answer

#try2 syntax error absolutely wrong
# def solution(numbers):
#     numbers_str = list(map(str, numbers))
#     sorted1 = sorted(numbers_str, key = lambda x :x[0], reverse = True)
#     sorted2 = sorted(sorted1, key = lambda x :x[1] if len(x)>1, reverse = True)
#     sorted3 = sorted(sorted1, key = lambda x :x[2] if len(x)>2, reverse = True)
#     sorted4 = sorted(sorted1, key = lambda x :x[3] if len(x)>3, reverse = True)
#     answer = ''.join(sorted4)
#     return answer



#[출처] : https://jokerldg.github.io/algorithm/2021/05/06/most-big-number.html
def solution(numbers):
    numbers = list(map(str, numbers))
    numbers.sort(key=lambda x: x * 3, reverse=True)
    return str(int(''.join(numbers)))