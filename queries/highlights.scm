(function_call function: (reference (identifier) @function.builtin .))

[
  (boolean)
] @constant.builtin

[
  (integer)
  (float)
] @number

(string) @string

[
 "+"
 "-"
 "*"
 "/"
 "%"
 "or"
 "and"
 "not"
 "=="
 "!="
 ">"
 ">="
 "<="
 "<"
] @operator

[
 "(" ")"
] @punctuation.bracket

[
 ","
 "."
] @punctuation.special

[
 "__test"
 "expression"
 "end"
] @keyword
