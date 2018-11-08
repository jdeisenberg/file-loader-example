/*
 * Bind to JavaScript require() function
 */
[@bs.val] external require : string => string = "";

/*
 * These requires will let webpack know that they
 * are part of the bundle. The path names are relative
 * to this source file.
 */
require("../images/bird.png");
require("../images/cat.png");
require("../images/dog.png");
require("../images/fish.png");

let component = ReasonReact.statelessComponent("Animal");


/*
 * In the `<img>` element, the `src` pathname 
 * is relative to the `build` directory. Webpack
 * will put the `images` directory at the same
 * level as the `index.html` file, so we do
 * not want to use `../` here.
 */
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
