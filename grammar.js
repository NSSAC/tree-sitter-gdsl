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
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  },

  _whitespace: _ => /\s/,
});
