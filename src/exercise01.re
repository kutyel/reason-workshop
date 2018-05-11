let addAndStringify = (a, b) => string_of_int(a + b);

/* Function that squares a number */
let square = x => x * x;

/* Call labelled function with arguments in a different order */
let labelled = (~first, ~second) => {j|Hello $first and $second!|j};

labelled(~second="John", ~first="Mark");

/* Update a record with spread operator (ask a volunteer for help)! */
type person = {
  name: string,
  age: int,
};

let me = {name: "Flavio", age: 27};

let meOlder = {...me, age: 28};

/* Add an item to a list */
let list = [1, 2, 3];

let l2 = [0, ...list];

/* Mutate an item in an array */
let array = [|'a', 'b', 'c'|];

array[1] = 'd';

Js.log(array);

/* Map over a list of integers with a function to create a new list with each item incremented by one */
let inc = x => x + 1;

List.map(inc, list);
