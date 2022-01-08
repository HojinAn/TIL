function solution(s) {
  // 1. 그냥 숫자의 경우 그대로 출력, 문자열의 경우 숫자로 바꾸어 출력
  // 문자열은 결국 one, two, three, ... , zero에서 밖에 안나온다. 시작 알파벳 별로 분류해볼까. 대문자도 들어오나?
  // "z"ero
  // "o"ne
  // "t"wo, "t"hree
  // "f"our, "f"ive
  // "s"ix, "s"even
  // "e"ight
  // "n"ine

  // 2. one4seven8 -> 1478
  // 2345 -> 2345
  // 2three45sixseven -> 234567
  // "zero", "0"으로 시작하는 경우는 없음 -> 시작은 1~9, one~nine 사이
  // 3. 세부분석
  // 하드코딩부터 생각
  // s의 길이 동안 순회하며 비교 ascii로 봤을 때 s[i]가 48(0)~57(9)? -> 그대로 push +1index
  let arr_pushed = [];
  let i = 0;
  console.log(typeof s[i]);
  while (i < s.length) {
    if ("0" <= s[i] && s[i] <= "9") {
      arr_pushed.push(s[i]);
      i += 1;
    }
    // else일 경우(97~122)
    else {
      // z(122)로 시작 문자열? -> 0 새 array에 push, 바로 +4번 index로 가서 확인
      if (s[i] === "z") {
        arr_pushed.push("0");
        i += 4;
      }
      // o로 시작? -> 1 push -> +3번 index
      else if (s[i] === "o") {
        arr_pushed.push("1");
        i += 3;
      }
      // t? +1index도 확인 w? 2 push -> +3 index
      else if (s[i] === "t") {
        if (s[i + 1] === "w") {
          arr_pushed.push("2");
          i += 3;
        }
        // h? 3 push +5 index
        else {
          arr_pushed.push("3");
          i += 5;
        }
      }
      // f? o? 4 push -> +4 index
      else if (s[i] === "f") {
        if (s[i + 1] === "o") {
          arr_pushed.push("4");
          i += 4;
        }
        // i? 5push -> +4index
        else {
          arr_pushed.push("5");
          i += 4;
        }
      }
      // s? i? 6push -> +3index
      else if (s[i] == "s") {
        if (s[i + 1] === "i") {
          arr_pushed.push("6");
          i += 3;
        }
        // e? 7push -> +5index
        else {
          arr_pushed.push("7");
          i += 5;
        }
      }
      // e? 8push +5index
      else if (s[i] === "e") {
        arr_pushed.push("8");
        i += 5;
      }
      // n? 9push +4index
      else if (s[i] === "n") {
        arr_pushed.push("9");
        i += 4;
      }
    }
  }
  // push 된 array join("")
  const result_str = arr_pushed.join("");
  console.log(result_str);
  // parseInt 실행
  const result = parseInt(result_str, 10);
  return result;
}
