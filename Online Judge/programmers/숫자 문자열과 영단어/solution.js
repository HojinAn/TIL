function solution(s) {
  let result = "";
  let i = 0;

  const numLengths = [4, 3, 3, 5, 4, 4, 3, 5, 5, 4];

  while (i < s.length) {
    let num;

    const char = s[i];

    if (char === "z") num = 0;
    else if (char === "o") num = 1;
    else if (char === "t" && s[i + 1] === "w") num = 2;
    else if (char === "t" && s[i + 1] === "h") num = 3;
    else if (char === "f" && s[i + 1] === "o") num = 4;
    else if (char === "f" && s[i + 1] === "i") num = 5;
    else if (char === "s" && s[i + 1] === "i") num = 6;
    else if (char === "s" && s[i + 1] === "e") num = 7;
    else if (char === "e") num = 8;
    else if (char === "n") num = 9;
    else {
      result += char;
      i += 1;

      continue;
    }

    result += `${num}`;
    i += numLengths[num];
  }

  return +result;
}
