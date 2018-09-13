type color =
  | Black
  | White;

type figure = {
  kind: string,
  color,
  position: (int, int),
};

let figures = [
  {kind: "king", color: Black, position: (1, 1)},
  {kind: "pawn", color: Black, position: (1, 2)},
  {kind: "tower", color: White, position: (3, 3)},
  {kind: "queen", color: Black, position: (4, 1)},
];

let filterColor = c => List.filter(({color}) => color == c);

Js.log(filterColor(Black, figures));

let filterSpecificPosition = (x, y) =>
  List.filter(({position: (row, col)}) => row == x && col == y);

/* Use composition instead of |> operator */
let filterMultiple = (color, (x, y), values) =>
  filterColor(color) @@ filterSpecificPosition(x, y) @@ values;

Js.log(filterMultiple(Black, (4, 1), figures));
