#code...1억 코드가 많아짐에 따라 정리정돈 필요
a=1
b=2
c=3
s=a+b+c
r=s/3
print(r) #자주 사용되고 보편적인 코드라면 중복이 아주 많이 발생할 것 -> 이때 함수를 활용하면 행복해지는 것
#code... 1억


#def 함수를 만드는 거
'''
def average():
    a=1
    b=2
    c=3
    s=a+b+c
    r=s/3
    print(r)
#어디서부터 어디까지가 함수인지 파악하기 좋다

average()
'''
'''
#매개변수parameter
#인자argument
def average(a,b,c):
    s=a+b+c
    r=s/3
    print(r)

average(10,20,30)
'''
#얘네는 지금 평균도 구하고 출력도 하고 너무 많은 일을 하고 있다. 좋은 부품은 한가지일을 하는 함수 함수가 이름에 걸맞는 본질적인 작업만 해줄 수 있도록 해주자
#하나의 함수에는 한가지 기능

def average(a,b,c):
    s=a+b+c
    r=s/3
    return r

print(average(10,20,30))
