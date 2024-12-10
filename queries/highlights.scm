(function name: (identifier) @function)
(function type: (reference (identifier)) @type)
(function_param type: (reference (identifier)) @type)

(variable type: (reference (identifier)) @type)

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
 "="
 "*="
 "/="
 "%="
 "+="
 "-="
] @operator

[
 "(" ")"
] @punctuation.bracket

[
 ","
 ":"
 "."
] @punctuation.special

[
 "end"
 "__test" "expression" "statement"
 "def"
 "var"
 "pass"
 "return"
 "if" "elif" "else"
 "switch" "case" "default"
] @keyword

(comment) @comment
