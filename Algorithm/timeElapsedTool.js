function functionToRun() {
  let result = 0;
  return result;
}

var t1 = performance.now();
functionToRun();
var t2 = performance.now();
console.log(`Time Elapsed: ${(t2 - t1) / 1000} seconds.`)