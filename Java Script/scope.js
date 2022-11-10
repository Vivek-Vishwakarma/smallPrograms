//lexical scope

//this is global scope
// var hello = "hello";
// function log() {
//   //this is local/functional scope
//   var something = "something";
//   console.log(hello);
// }
// log();

function createBase(num) {
  return function (innerNum) {
    console.log(innerNum + num);
  };
}
var addSix = createBase(6);
console.log(createBase(6));
addSix(10); // returns 16
addSix(21); // returns 27
