#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  anon_sym___test = 1,
  anon_sym_expression = 2,
  anon_sym_COLON = 3,
  anon_sym_end = 4,
  anon_sym_not = 5,
  anon_sym_DASH = 6,
  anon_sym_PLUS = 7,
  anon_sym_STAR = 8,
  anon_sym_SLASH = 9,
  anon_sym_PERCENT = 10,
  anon_sym_or = 11,
  anon_sym_and = 12,
  anon_sym_EQ_EQ = 13,
  anon_sym_BANG_EQ = 14,
  anon_sym_GT = 15,
  anon_sym_GT_EQ = 16,
  anon_sym_LT_EQ = 17,
  anon_sym_LT = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_COMMA = 21,
  anon_sym_DOT = 22,
  sym_integer = 23,
  sym_float = 24,
  anon_sym_True = 25,
  anon_sym_False = 26,
  sym_string = 27,
  sym_identifier = 28,
  sym_comment = 29,
  sym__whitespace = 30,
  sym_source_file = 31,
  sym_test_expression = 32,
  sym__expression = 33,
  sym_unary_expression = 34,
  sym_binary_expression = 35,
  sym_parenthesized_expression = 36,
  sym_function_call = 37,
  sym_reference = 38,
  sym_boolean = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_function_call_repeat1 = 41,
  aux_sym_reference_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym___test] = "__test",
  [anon_sym_expression] = "expression",
  [anon_sym_COLON] = ":",
  [anon_sym_end] = "end",
  [anon_sym_not] = "not",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_string] = "string",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym_source_file] = "source_file",
  [sym_test_expression] = "test_expression",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_function_call] = "function_call",
  [sym_reference] = "reference",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_reference_repeat1] = "reference_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym___test] = anon_sym___test,
  [anon_sym_expression] = anon_sym_expression,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [sym_string] = sym_string,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym_source_file] = sym_source_file,
  [sym_test_expression] = sym_test_expression,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_function_call] = sym_function_call,
  [sym_reference] = sym_reference,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_reference_repeat1] = aux_sym_reference_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym___test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expression] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_test_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reference_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arg = 1,
  field_argument = 2,
  field_expression = 3,
  field_function = 4,
  field_left = 5,
  field_operator = 6,
  field_right = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_argument] = "argument",
  [field_expression] = "expression",
  [field_function] = "function",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument, 1},
    {field_operator, 0},
  [2] =
    {field_expression, 3},
  [3] =
    {field_expression, 1},
  [4] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [7] =
    {field_function, 0},
  [8] =
    {field_arg, 2},
    {field_function, 0},
  [10] =
    {field_arg, 2},
    {field_arg, 3},
    {field_function, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      ADVANCE_MAP(
        '!', 7,
        '"', 5,
        '#', 92,
        '%', 60,
        '(', 69,
        ')', 70,
        '*', 58,
        '+', 57,
        ',', 71,
        '-', 56,
        '.', 73,
        '/', 59,
        ':', 52,
        '<', 68,
        '=', 8,
        '>', 65,
        'F', 11,
        'T', 27,
        '_', 10,
        'a', 20,
        'e', 23,
        'n', 25,
        'o', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 7,
        '#', 92,
        '%', 60,
        '(', 69,
        ')', 70,
        '*', 58,
        '+', 57,
        ',', 71,
        '-', 56,
        '.', 72,
        '/', 59,
        '<', 68,
        '=', 8,
        '>', 65,
        'a', 20,
        'e', 22,
        'o', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 5,
        '#', 92,
        '(', 69,
        ')', 70,
        '+', 57,
        '-', 56,
        '.', 39,
        'F', 82,
        'T', 87,
        'n', 86,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == 'U') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym___test);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_expression);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym___test] = ACTIONS(1),
    [anon_sym_expression] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(42),
    [sym_test_expression] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [anon_sym___test] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_reference_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(9), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(7), 15,
      anon_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [32] = 5,
    ACTIONS(11), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_reference_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(15), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(13), 15,
      anon_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [64] = 5,
    ACTIONS(21), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_reference_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(17), 15,
      anon_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [96] = 11,
    ACTIONS(24), 1,
      anon_sym_not,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(30), 1,
      anon_sym_RPAREN,
    ACTIONS(32), 1,
      sym_integer,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(9), 1,
      sym_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(26), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(34), 2,
      sym_float,
      sym_string,
    ACTIONS(36), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(28), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_function_call,
      sym_boolean,
  [139] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(17), 16,
      anon_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
  [166] = 10,
    ACTIONS(24), 1,
      anon_sym_not,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(40), 1,
      sym_integer,
    STATE(9), 1,
      sym_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(26), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(36), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(42), 2,
      sym_float,
      sym_string,
    STATE(22), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_function_call,
      sym_boolean,
  [206] = 10,
    ACTIONS(24), 1,
      anon_sym_not,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(44), 1,
      sym_integer,
    STATE(9), 1,
      sym_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(26), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(36), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(46), 2,
      sym_float,
      sym_string,
    STATE(32), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_function_call,
      sym_boolean,
  [246] = 4,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(50), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(48), 14,
      anon_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [274] = 10,
    ACTIONS(24), 1,
      anon_sym_not,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(54), 1,
      sym_integer,
    STATE(9), 1,
      sym_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(26), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(36), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(56), 2,
      sym_float,
      sym_string,
    STATE(21), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_function_call,
      sym_boolean,
  [314] = 10,
    ACTIONS(24), 1,
      anon_sym_not,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(58), 1,
      sym_integer,
    STATE(9), 1,
      sym_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(26), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(36), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(60), 2,
      sym_float,
      sym_string,
    STATE(23), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_function_call,
      sym_boolean,
  [354] = 10,
    ACTIONS(24), 1,
      anon_sym_not,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(62), 1,
      sym_integer,
    STATE(9), 1,
      sym_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(26), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(36), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(64), 2,
      sym_float,
      sym_string,
    STATE(24), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_function_call,
      sym_boolean,
  [394] = 10,
    ACTIONS(24), 1,
      anon_sym_not,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(66), 1,
      sym_integer,
    STATE(9), 1,
      sym_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(26), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(36), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(68), 2,
      sym_float,
      sym_string,
    STATE(25), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_function_call,
      sym_boolean,
  [434] = 10,
    ACTIONS(24), 1,
      anon_sym_not,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(70), 1,
      sym_integer,
    STATE(9), 1,
      sym_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(26), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(36), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(72), 2,
      sym_float,
      sym_string,
    STATE(26), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_function_call,
      sym_boolean,
  [474] = 10,
    ACTIONS(24), 1,
      anon_sym_not,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym_integer,
    STATE(9), 1,
      sym_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(26), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(36), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(76), 2,
      sym_float,
      sym_string,
    STATE(33), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_function_call,
      sym_boolean,
  [514] = 10,
    ACTIONS(24), 1,
      anon_sym_not,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(78), 1,
      sym_integer,
    STATE(9), 1,
      sym_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(26), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(36), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(80), 2,
      sym_float,
      sym_string,
    STATE(31), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_function_call,
      sym_boolean,
  [554] = 10,
    ACTIONS(24), 1,
      anon_sym_not,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(82), 1,
      sym_integer,
    STATE(9), 1,
      sym_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(26), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(36), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(84), 2,
      sym_float,
      sym_string,
    STATE(18), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_function_call,
      sym_boolean,
  [594] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(88), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(86), 14,
      anon_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [619] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(92), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(90), 14,
      anon_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [644] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(96), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(94), 14,
      anon_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [669] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(102), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(100), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(98), 11,
      anon_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [696] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(102), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(98), 14,
      anon_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [721] = 8,
    ACTIONS(106), 1,
      anon_sym_and,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(104), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(108), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(112), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(98), 4,
      anon_sym_end,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [756] = 7,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(104), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(108), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(112), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(98), 5,
      anon_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [789] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(104), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(112), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(98), 7,
      anon_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [820] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(102), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(104), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(100), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(98), 9,
      anon_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [849] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(116), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 14,
      anon_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [874] = 11,
    ACTIONS(106), 1,
      anon_sym_and,
    ACTIONS(118), 1,
      anon_sym_or,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(104), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(108), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(112), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [915] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(124), 14,
      anon_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [940] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(130), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(128), 14,
      anon_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [965] = 9,
    ACTIONS(106), 1,
      anon_sym_and,
    ACTIONS(118), 1,
      anon_sym_or,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(104), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(108), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(112), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(132), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(100), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1001] = 9,
    ACTIONS(106), 1,
      anon_sym_and,
    ACTIONS(118), 1,
      anon_sym_or,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(104), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(108), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(112), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1036] = 9,
    ACTIONS(106), 1,
      anon_sym_and,
    ACTIONS(118), 1,
      anon_sym_or,
    ACTIONS(136), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(104), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(108), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(112), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1071] = 4,
    ACTIONS(5), 1,
      anon_sym___test,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(35), 2,
      sym_test_expression,
      aux_sym_source_file_repeat1,
  [1086] = 4,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      anon_sym___test,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(35), 2,
      sym_test_expression,
      aux_sym_source_file_repeat1,
  [1101] = 4,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1115] = 4,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1129] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym___test,
  [1138] = 2,
    ACTIONS(152), 1,
      anon_sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1146] = 2,
    ACTIONS(154), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1154] = 2,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1162] = 2,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 166,
  [SMALL_STATE(8)] = 206,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 274,
  [SMALL_STATE(11)] = 314,
  [SMALL_STATE(12)] = 354,
  [SMALL_STATE(13)] = 394,
  [SMALL_STATE(14)] = 434,
  [SMALL_STATE(15)] = 474,
  [SMALL_STATE(16)] = 514,
  [SMALL_STATE(17)] = 554,
  [SMALL_STATE(18)] = 594,
  [SMALL_STATE(19)] = 619,
  [SMALL_STATE(20)] = 644,
  [SMALL_STATE(21)] = 669,
  [SMALL_STATE(22)] = 696,
  [SMALL_STATE(23)] = 721,
  [SMALL_STATE(24)] = 756,
  [SMALL_STATE(25)] = 789,
  [SMALL_STATE(26)] = 820,
  [SMALL_STATE(27)] = 849,
  [SMALL_STATE(28)] = 874,
  [SMALL_STATE(29)] = 915,
  [SMALL_STATE(30)] = 940,
  [SMALL_STATE(31)] = 965,
  [SMALL_STATE(32)] = 1001,
  [SMALL_STATE(33)] = 1036,
  [SMALL_STATE(34)] = 1071,
  [SMALL_STATE(35)] = 1086,
  [SMALL_STATE(36)] = 1101,
  [SMALL_STATE(37)] = 1115,
  [SMALL_STATE(38)] = 1129,
  [SMALL_STATE(39)] = 1138,
  [SMALL_STATE(40)] = 1146,
  [SMALL_STATE(41)] = 1154,
  [SMALL_STATE(42)] = 1162,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 2, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reference_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 5),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 6),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 6),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 7),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 7),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_expression, 5, 0, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [158] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_gdsl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
