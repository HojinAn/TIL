practice1=[9,1,8,5,2,7]
result1=sorted(practice1)
print(result1)#[1, 2, 5, 7, 8, 9]
result2=sorted(practice1, reverse = True)
print(result2)#[9, 8, 7, 5, 2, 1]
practice2=[('가나다', 50), ('사아자', 20), ('라마바', 80)]
result3=sorted(practice2, key = lambda x : x[1], reverse = True)
print(result3)#[('라마바', 80), ('가나다', 50), ('사아자', 20)]
result4=sorted(result3, key = lambda x: x[0])
print(result4)#[('가나다', 50), ('라마바', 80), ('사아자', 20)]