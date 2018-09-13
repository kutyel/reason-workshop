type action =
  | Click
  | Reset;

type state = {count: int};

let component = ReasonReact.reducerComponent("CounterApp");

let make = _children => {
  ...component,
  initialState: () => {count: 0},
  reducer: (action, {count}) =>
    switch (action) {
    | Click => ReasonReact.Update({count: count + 1})
    | Reset => ReasonReact.Update({count: 0})
    },
  render: ({state: {count}, send}) => {
    let onClick = _e => send(Click);
    let onReset = _e => send(Reset);
    <div>
      {ReasonReact.string("Clicked " ++ string_of_int(count) ++ " time(s)")}
      <ClickerForm onClick onReset />
    </div>;
  },
};
