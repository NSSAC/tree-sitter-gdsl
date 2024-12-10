(node_field type: (reference (identifier)) @type)
(node_annotation) @annotation

(edge name: (identifier) @type)
(edge_field type: (reference (identifier)) @type)
(edge_annotation) @annotation

(enum name: (identifier) @type)
(enum const: (identifier) @constant
      ("," const: (identifier) @constant)*
)

(global type: (reference (identifier)) @type)

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
 "node" "edge"
 "__test" "expression" "statement"
 "def"
 "var"
 "pass"
 "return"
 "if" "elif" "else"
 "switch" "case" "default"
] @keyword

(comment) @comment
