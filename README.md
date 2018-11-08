# file-loader-example
Example of file-loader with ReasonReact.

Uses `file-loader` (https://github.com/webpack-contrib/file-loader) to 
allow `webpack` (https://webpack.js.org/) to bundle images along with
a ReasonReact component.

You will have to install `file-loader`:

```
npm install file-loader --save-dev
```

The program has an `<Animal species="..." name="..." />` component, which, when rendered, shows a picture of the species (bird, cat, dog, fish) and its name, as shown here:

![Four Animal components, one of each type, in vertical line](/screenshot.png)

Be sure to look at `webpack.config.js`; it needs additions to allow `file-loader` to do its work.

Artwork is from https://openclipart.org
