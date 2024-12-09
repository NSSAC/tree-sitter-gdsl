#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym___test = 1,
  anon_sym_expression = 2,
  anon_sym_COLON = 3,
  anon_sym_end = 4,
  sym_integer = 5,
  sym_float = 6,
  anon_sym_True = 7,
  anon_sym_False = 8,
  sym_string = 9,
  sym__whitespace = 10,
  sym_source_file = 11,
  sym_test_expression = 12,
  sym__expression = 13,
  sym_boolean = 14,
  aux_sym_source_file_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym___test] = "__test",
  [anon_sym_expression] = "expression",
  [anon_sym_COLON] = ":",
  [anon_sym_end] = "end",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_string] = "string",
  [sym__whitespace] = "_whitespace",
  [sym_source_file] = "source_file",
  [sym_test_expression] = "test_expression",
  [sym__expression] = "_expression",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym___test] = anon_sym___test,
  [anon_sym_expression] = anon_sym_expression,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_end] = anon_sym_end,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [sym_string] = sym_string,
  [sym__whitespace] = sym__whitespace,
  [sym_source_file] = sym_source_file,
  [sym_test_expression] = sym_test_expression,
  [sym__expression] = sym__expression,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_expression = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_expression] = "expression",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_expression, 3},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == 'T') ADVANCE(18);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'U') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym___test);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_expression);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym___test] = ACTIONS(1),
    [anon_sym_expression] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(7),
    [sym_test_expression] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym___test] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(7), 1,
      sym_integer,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    ACTIONS(11), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(10), 2,
      sym__expression,
      sym_boolean,
  [19] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym___test,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym_test_expression,
      aux_sym_source_file_repeat1,
  [33] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym___test,
    STATE(4), 2,
      sym_test_expression,
      aux_sym_source_file_repeat1,
  [47] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(20), 2,
      ts_builtin_sym_end,
      anon_sym___test,
  [55] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(22), 1,
      anon_sym_expression,
  [62] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
  [69] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(26), 1,
      anon_sym_COLON,
  [76] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(28), 1,
      anon_sym_end,
  [83] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(30), 1,
      anon_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 33,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 55,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 69,
  [SMALL_STATE(9)] = 76,
  [SMALL_STATE(10)] = 83,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_expression, 5, 0, 1),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [24] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
