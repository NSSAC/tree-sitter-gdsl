/**
 * @file Graph Dynamical System Language
 * @author Parantapa Bhattacharya <parantapa@virginia.edu>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  LOGICAL_OR: 1,
  LOGICAL_AND: 2,
  EQUAL: 3,
  RELATIONAL: 4,
  ADD: 5,
  MULTIPLY: 6,
  UNARY: 7,
  CALL: 8,
};

module.exports = grammar({
  name: "gdsl",

  word: $ => $.identifier,

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
      $.string,
      $.reference,
      $.function_call,
      $.unary_expression,
      $.binary_expression,
      $.parenthesized_expression,
    ),

    unary_expression: $ => prec.left(PREC.UNARY, seq(
      field('operator', choice('not', '-', '+')),
      field('argument', $._expression),
    )),

    binary_expression: $ => {
      const table = [
        ['+', PREC.ADD],
        ['-', PREC.ADD],
        ['*', PREC.MULTIPLY],
        ['/', PREC.MULTIPLY],
        ['%', PREC.MULTIPLY],
        ['or', PREC.LOGICAL_OR],
        ['and', PREC.LOGICAL_AND],
        ['==', PREC.EQUAL],
        ['!=', PREC.EQUAL],
        ['>', PREC.RELATIONAL],
        ['>=', PREC.RELATIONAL],
        ['<=', PREC.RELATIONAL],
        ['<', PREC.RELATIONAL],
      ];

      return choice(...table.map(([operator, precedence]) => {
        return prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression),
        ));
      }));
    },

    parenthesized_expression: $ => seq(
      '(',
      field('expression', $._expression),
      ')'
    ),

    function_call: $ => prec(PREC.CALL, seq(
      field('function', $.reference),
      '(',
      field('arg', commaSep($._expression)),
      ')'
    )),

    reference: $ => dotSep1($.identifier),

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

    identifier: _ => /[a-zA-Z][_a-zA-Z0-9]*/,

    comment: _ => token(seq('#', /.*/)),

    _whitespace: _ => /\s/,
  },

  extras: $ => [
    $._whitespace,
    $.comment
  ]
});


function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function dotSep1(rule) {
  return seq(rule, repeat(seq('.', rule)));
}
