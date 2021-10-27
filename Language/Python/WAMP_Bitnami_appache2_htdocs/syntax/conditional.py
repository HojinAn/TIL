#if xxx#boolean data type이 와야함 :
#    yyy

user_id = input('id?')
user_pwd = input('password?')
#print(user_input)
'''
if user_pwd == '111111':
    print('Hello master')#들여쓰기는 똑같은 형식을 이용해서 해야함 이것이 파이썬의 특징 같은 블럭은 같은 형식으로 받아들인다
else:
    print('Who are you?')
'''
'''
if user_id == 'AHJ':
    if user_pwd == '111111':
        print('Hello master')
    else:
        print('Who are you?')
else:
    print('Who are you?')
'''

if user_id == 'AHJ' and user_pwd == '111111':
    print('Hello master')
elif user_id == 'egoing' and user_pwd == '222':
    print('Hello master')
else:
    print('Who are you?')
