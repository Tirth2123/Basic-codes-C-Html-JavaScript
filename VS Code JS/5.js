// Type Conversion 

let myVar;
// myVar = 51;
myVar = String(51);
console.log(myVar, typeof(myVar));

let booleanVar = String(true);
//console.log(booleanVar, typeof(booleanVar));
console.log(booleanVar, typeof(booleanVar));

let date = String( new Date());
// console.log(date, typeof(date));
console.log(date, typeof(date));

let arr = String([25,88,84,77]);
// console.log(arr.length, typeof(arr));
console.log(arr.length, typeof(arr));

let i = 21;
console.log(i.toString());

let t = Number("2123");
// t = Number("21T23");
// t = Number(true);
// t = Number([25,88,84,77]);
console.log(t, typeof(t));

let number = parseInt("2123.83")
// let number = parseFloat("2123.83")
console.log(number.toFixed(2), typeof(number));

// Type coercion

let str = "2102";
// let str = Number("2102");
let num = 2003;
console.log(str + num);