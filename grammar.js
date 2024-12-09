/**
 * @file Graph Dynamical System Language
 * @author Parantapa Bhattacharya <parantapa@virginia.edu>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "gdsl",

  rules: {
    source_file: $ => repeat1($.test_expression),

    test_expression: $ => seq(
      '__test', 'expression', ':',
      field('expression', $._expression),
      'end'
    ),

    _expression: $ => choice(
      $.integer,
      $.float,
      $.boolean,
      $.string
    ),

    integer: _ => token(repeat1(/[0-9]+/)),

    float: _ => {
      const digits = repeat1(/[0-9]+/);
      const exponent = seq(/[eE][\+-]?/, digits);

      return token(seq(
        choice(
          seq(digits, '.', optional(digits), optional(exponent)),
          seq(optional(digits), '.', digits, optional(exponent)),
          seq(digits, exponent),
        ),
      ));
    },

    boolean: _ => choice('True', 'False'),

    string: _ => token(seq(
      '"',
      repeat(choice(
        token.immediate(/[^\\"\n]+/),
        seq(
          '\\',
          choice(
            /[^xuU]/,
            /\d{2,3}/,
            /x[0-9a-fA-F]{2,}/,
            /u[0-9a-fA-F]{4}/,
            /U[0-9a-fA-F]{8}/,
          ),
        )
      )),
      '"'
    )),

    _whitespace: _ => /\s/,
  },

  extras: $ => [
    $._whitespace
  ]
});
