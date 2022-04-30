var b = 10
function x(){
    var a = 30
    return function y(){
        console.log(a)
        console.log(b)
    }
}
x()()