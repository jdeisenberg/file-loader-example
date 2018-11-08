/*
 * Bind to JavaScript require() function
 */
[@bs.val] external require : string => string = "";

/*
 * These requires will let webpack know that they
 * are part of the bundle
 */
require("../images/bird.png");
require("../images/cat.png");
require("../images/dog.png");
require("../images/fish.png");

let component = ReasonReact.statelessComponent("Animal");


let make = (~species, ~name, _children) => {
  ...component,
  render: _self =>
    <div style={ReactDOMRe.Style.make(
                  ~display="inline-block",
                  ~textAlign="center",
                  ~marginBottom="0.75em", ())}>
      <img src={"images/" ++ species ++ ".png"}/>
      <span><br /></span>
      {ReasonReact.string(name)}
    </div>,
};
