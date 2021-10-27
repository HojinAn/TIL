import itertools

data = ['A', 'B', 'C']

result1=list(itertools.permutations(data, 3))
print(result1)
#[('A', 'B', 'C'), ('A', 'C', 'B'), ('B', 'A', 'C'), ('B', 'C', 'A'), ('C', 'A', 'B'), ('C', 'B', 'A')]
result2=list(itertools.combinations(data, 2))
print(result2)
#[('A', 'B'), ('A', 'C'), ('B', 'C')]
result3=list(itertools.product(data, repeat=2))#product는 중복해서 골라질 수 있게 해준다.
print(result3)
#[('A', 'A'), ('A', 'B'), ('A', 'C'), ('B', 'A'), ('B', 'B'), ('B', 'C'), ('C', 'A'), ('C', 'B'), ('C', 'C')]
result4=list(itertools.combinations_with_replacement(data, 2))
print(result4)
#[('A', 'A'), ('A', 'B'), ('A', 'C'), ('B', 'B'), ('B', 'C'), ('C', 'C')]