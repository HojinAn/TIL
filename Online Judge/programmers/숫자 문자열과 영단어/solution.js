function solution(s) {
  // 하드코딩 해놓은 것을 refactoring 해보자
  const list_num = [
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
  ];
  // 각 element랑 index랑 일치하는 것을 이용해보자
  // string을 순회하면서 list_num element랑 비교해가면서 해당 자리를 index로 교체
  // string -> split 해서 array로 만든다음 array를 순환해서 element가 list_num element랑 일치하면 list_num element의 index로 교체
  for (let i = 0; i < s.length; i++) {
    let arr = s.split(list_num[i]);
    // 도무지 모르겠어서 남의 풀이 가장 깔끔한 것 발견 join을 이용한 천재적 풀이...
    s = arr.join(i);
  }
  return Number(s);
}

console.log(typeof solution("onetwo1threezerofourninefive6seven"));
