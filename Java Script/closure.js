// var b = 10
// function x(){
//     var a = 30
//     return function y(){
//         console.log(a)
//         console.log(b)
//     }
// }
// x()()

// function x() {
//   var hello = "hello";
//   function y() {
//     console.log(hello);
//   }
//   y();
// }
// x();

//Output : hello

// const arr = [2,2,1]
// arr.filter((e)=>{
//     return console.log();
// })
// global scope
const x = 5;
function sum(a) {
  return function (b) {
    return function (c) {
      // outer functions scope
      return function (d) {
        // local scope
        return a + b + c + d + x;
      };
    };
  };
}

console.log(sum(1)(2)(3)(4));
//Output : 15
