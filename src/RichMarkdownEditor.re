[@bs.obj]
external makePropsEditor:
  (
    ~className: string=?,
    ~id: string=?,
    ~defaultValue: string=?,
    ~placeholder: string=?,
    ~readOnly: bool=?,
    ~autoFocus: bool=?,
    ~spellCheck: bool=?,
    ~toc: bool=?,
    ~dark: bool=?,
    ~onCancel: unit => unit=?,
    ~onChange: (unit => string) => unit=?,
    unit
  ) =>
  _ =
  "";

[@bs.module "rich-markdown-editor"]
external reactComponent: React.component('a) = "default";

[@react.component]
let make =
    (
      ~className: option(string)=?,
      ~id: option(string)=?,
      ~defaultValue: option(string)=?,
      ~placeholder: option(string)=?,
      ~readOnly: option(bool)=?,
      ~autoFocus: option(bool)=?,
      ~spellCheck: option(bool)=?,
      ~toc: option(bool)=?,
      ~dark: option(bool)=?,
      ~onCancel: option(unit => unit)=?,
      ~onChange: option((unit => string) => unit)=?,
    ) =>
  React.createElement(
    reactComponent,
    makePropsEditor(
      ~className?,
      ~id?,
      ~defaultValue?,
      ~placeholder?,
      ~readOnly?,
      ~autoFocus?,
      ~spellCheck?,
      ~toc?,
      ~dark?,
      ~onCancel?,
      ~onChange?,
      (),
    ),
  );

let default = make;