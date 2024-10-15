#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_dash_comment = 1,
  anon_sym_SLASH_DASH_DASH = 2,
  aux_sym_doc_comment_token1 = 3,
  anon_sym_SLASH_DASH = 4,
  sym_type_storage = 5,
  sym_modifier_storage = 6,
  sym_illegal = 7,
  sym_keyword = 8,
  anon_sym_inductive = 9,
  anon_sym_coinductive = 10,
  anon_sym_structure = 11,
  anon_sym_theorem = 12,
  anon_sym_axiom = 13,
  anon_sym_abbrev = 14,
  anon_sym_lemma = 15,
  anon_sym_def = 16,
  anon_sym_instance = 17,
  anon_sym_class = 18,
  anon_sym_constant = 19,
  aux_sym_definition_command_token1 = 20,
  aux_sym_definition_token1 = 21,
  anon_sym_SPACE = 22,
  aux_sym_definition_token2 = 23,
  anon_sym_LPARENs_BANG_RPAREN_DQUOTE = 24,
  aux_sym_string_interpolated_token1 = 25,
  aux_sym_string_interpolated_token2 = 26,
  aux_sym_string_interpolated_token3 = 27,
  aux_sym_string_interpolated_token4 = 28,
  anon_sym_LBRACE = 29,
  anon_sym_RBRACE = 30,
  anon_sym_DQUOTE = 31,
  sym_constant_language = 32,
  sym_constant_numeric = 33,
  anon_sym_u00ab = 34,
  aux_sym_entity_name_token1 = 35,
  anon_sym_u00bb = 36,
  sym_source_file = 37,
  sym_comment = 38,
  sym_doc_comment = 39,
  sym_block_comment = 40,
  sym_definition_command = 41,
  sym_definition = 42,
  sym_string_interpolated = 43,
  sym_string_double = 44,
  sym_entity_name = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_string_interpolated_repeat1 = 47,
  aux_sym_string_interpolated_repeat2 = 48,
  aux_sym_string_double_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_dash_comment] = "line_comment",
  [anon_sym_SLASH_DASH_DASH] = "/--",
  [aux_sym_doc_comment_token1] = "doc_comment_token1",
  [anon_sym_SLASH_DASH] = "/-",
  [sym_type_storage] = "type_storage",
  [sym_modifier_storage] = "modifier_storage",
  [sym_illegal] = "illegal",
  [sym_keyword] = "keyword",
  [anon_sym_inductive] = "inductive",
  [anon_sym_coinductive] = "coinductive",
  [anon_sym_structure] = "structure",
  [anon_sym_theorem] = "theorem",
  [anon_sym_axiom] = "axiom",
  [anon_sym_abbrev] = "abbrev",
  [anon_sym_lemma] = "lemma",
  [anon_sym_def] = "def",
  [anon_sym_instance] = "instance",
  [anon_sym_class] = "class",
  [anon_sym_constant] = "constant",
  [aux_sym_definition_command_token1] = "definition_command_token1",
  [aux_sym_definition_token1] = "definition_token1",
  [anon_sym_SPACE] = " ",
  [aux_sym_definition_token2] = "definition_token2",
  [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = "(s!)\"",
  [aux_sym_string_interpolated_token1] = "string_interpolated_token1",
  [aux_sym_string_interpolated_token2] = "string_interpolated_token2",
  [aux_sym_string_interpolated_token3] = "string_interpolated_token3",
  [aux_sym_string_interpolated_token4] = "string_interpolated_token4",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [sym_constant_language] = "constant_language",
  [sym_constant_numeric] = "constant_numeric",
  [anon_sym_u00ab] = "\u00ab",
  [aux_sym_entity_name_token1] = "entity_name_token1",
  [anon_sym_u00bb] = "\u00bb",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_doc_comment] = "doc_comment",
  [sym_block_comment] = "block_comment",
  [sym_definition_command] = "definition_command",
  [sym_definition] = "definition",
  [sym_string_interpolated] = "string_interpolated",
  [sym_string_double] = "string_double",
  [sym_entity_name] = "entity_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_interpolated_repeat1] = "string_interpolated_repeat1",
  [aux_sym_string_interpolated_repeat2] = "string_interpolated_repeat2",
  [aux_sym_string_double_repeat1] = "string_double_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_dash_comment] = sym_dash_comment,
  [anon_sym_SLASH_DASH_DASH] = anon_sym_SLASH_DASH_DASH,
  [aux_sym_doc_comment_token1] = aux_sym_doc_comment_token1,
  [anon_sym_SLASH_DASH] = anon_sym_SLASH_DASH,
  [sym_type_storage] = sym_type_storage,
  [sym_modifier_storage] = sym_modifier_storage,
  [sym_illegal] = sym_illegal,
  [sym_keyword] = sym_keyword,
  [anon_sym_inductive] = anon_sym_inductive,
  [anon_sym_coinductive] = anon_sym_coinductive,
  [anon_sym_structure] = anon_sym_structure,
  [anon_sym_theorem] = anon_sym_theorem,
  [anon_sym_axiom] = anon_sym_axiom,
  [anon_sym_abbrev] = anon_sym_abbrev,
  [anon_sym_lemma] = anon_sym_lemma,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_instance] = anon_sym_instance,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_constant] = anon_sym_constant,
  [aux_sym_definition_command_token1] = aux_sym_definition_command_token1,
  [aux_sym_definition_token1] = aux_sym_definition_token1,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [aux_sym_definition_token2] = aux_sym_definition_token2,
  [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = anon_sym_LPARENs_BANG_RPAREN_DQUOTE,
  [aux_sym_string_interpolated_token1] = aux_sym_string_interpolated_token1,
  [aux_sym_string_interpolated_token2] = aux_sym_string_interpolated_token2,
  [aux_sym_string_interpolated_token3] = aux_sym_string_interpolated_token3,
  [aux_sym_string_interpolated_token4] = aux_sym_string_interpolated_token4,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_constant_language] = sym_constant_language,
  [sym_constant_numeric] = sym_constant_numeric,
  [anon_sym_u00ab] = anon_sym_u00ab,
  [aux_sym_entity_name_token1] = aux_sym_entity_name_token1,
  [anon_sym_u00bb] = anon_sym_u00bb,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_doc_comment] = sym_doc_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_definition_command] = sym_definition_command,
  [sym_definition] = sym_definition,
  [sym_string_interpolated] = sym_string_interpolated,
  [sym_string_double] = sym_string_double,
  [sym_entity_name] = sym_entity_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_interpolated_repeat1] = aux_sym_string_interpolated_repeat1,
  [aux_sym_string_interpolated_repeat2] = aux_sym_string_interpolated_repeat2,
  [aux_sym_string_double_repeat1] = aux_sym_string_double_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_dash_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doc_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_type_storage] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_storage] = {
    .visible = true,
    .named = true,
  },
  [sym_illegal] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_inductive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coinductive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_structure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_theorem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_axiom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abbrev] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lemma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constant] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_definition_command_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_definition_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_interpolated_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolated_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolated_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolated_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_constant_language] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_numeric] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u00ab] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_entity_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u00bb] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_definition_command] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_string_interpolated] = {
    .visible = true,
    .named = true,
  },
  [sym_string_double] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolated_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolated_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_double_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static TSCharacterRange aux_sym_definition_token2_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '\''}, {'*', '9'}, {';', '<'}, {'>', '>'}, {'@', 'Z'}, {'\\', '\\'},
  {'^', 'z'}, {'|', '|'}, {'~', 0xaa}, {0xac, 0xba}, {0xbc, 0x3ba}, {0x3bc, 0x2191}, {0x2193, 0x21ff}, {0x2201, 0x10ffff},
};

static TSCharacterRange aux_sym_definition_token2_character_set_2[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '\''}, {'*', '9'}, {';', 'Z'}, {'\\', '\\'}, {'^', 'z'}, {'|', '|'},
  {'~', 0xaa}, {0xac, 0xba}, {0xbc, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(309);
      ADVANCE_MAP(
        '"', 350,
        '#', 50,
        '(', 230,
        '-', 8,
        '/', 9,
        '0', 353,
        '@', 12,
        'P', 211,
        'S', 189,
        'T', 293,
        '\\', 266,
        'a', 44,
        'b', 213,
        'c', 16,
        'd', 76,
        'e', 147,
        'f', 20,
        'g', 150,
        'h', 21,
        'i', 105,
        'l', 77,
        'm', 17,
        'n', 22,
        'o', 201,
        'p', 39,
        'r', 78,
        's', 55,
        't', 115,
        'u', 173,
        'v', 37,
        'w', 116,
        '{', 347,
        '}', 349,
        0xab, 358,
        0xbb, 361,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(7);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 350,
        '#', 50,
        '(', 230,
        '-', 8,
        '/', 9,
        '0', 353,
        '@', 12,
        'P', 211,
        'S', 189,
        'T', 293,
        'a', 44,
        'b', 213,
        'c', 16,
        'd', 76,
        'e', 147,
        'f', 20,
        'g', 150,
        'h', 21,
        'i', 105,
        'l', 77,
        'm', 17,
        'n', 22,
        'o', 201,
        'p', 39,
        'r', 78,
        's', 55,
        't', 115,
        'u', 173,
        'v', 37,
        'w', 116,
        '{', 295,
        '}', 349,
        0xab, 358,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '{') ADVANCE(348);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(266);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(340);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == '0') ADVANCE(352);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(314);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(313);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '[') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == ']') ADVANCE(316);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(195);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(132);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(186);
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'x') ADVANCE(135);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(276);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(223);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(157);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'p') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(257);
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(253);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(332);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(327);
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(120);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(137);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(79);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(332);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 142:
      if (lookahead == 'k') ADVANCE(332);
      END_STATE();
    case 143:
      if (lookahead == 'k') ADVANCE(319);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(332);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(324);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(323);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(332);
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(315);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(317);
      END_STATE();
    case 201:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(278);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(121);
      if (lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(2);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 266:
      ADVANCE_MAP(
        'u', 306,
        'x', 303,
        '"', 344,
        '\'', 344,
        '\\', 344,
        'n', 344,
        'r', 344,
        't', 344,
      );
      END_STATE();
    case 267:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 268:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 269:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 270:
      if (lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 271:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 272:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(83);
      if (lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 280:
      if (lookahead == 'v') ADVANCE(325);
      END_STATE();
    case 281:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 282:
      if (lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 283:
      if (lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 284:
      if (lookahead == 'v') ADVANCE(88);
      END_STATE();
    case 285:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 286:
      if (lookahead == 'v') ADVANCE(126);
      END_STATE();
    case 287:
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 288:
      if (lookahead == 'w') ADVANCE(332);
      END_STATE();
    case 289:
      if (lookahead == 'x') ADVANCE(332);
      END_STATE();
    case 290:
      if (lookahead == 'x') ADVANCE(337);
      END_STATE();
    case 291:
      if (lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 292:
      if (lookahead == 'y') ADVANCE(317);
      END_STATE();
    case 293:
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 294:
      if (lookahead == 'z') ADVANCE(75);
      END_STATE();
    case 295:
      if (lookahead == '}') ADVANCE(331);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 296:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 297:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(297);
      if ((!eof && set_contains(aux_sym_definition_token2_character_set_1, 16, lookahead))) ADVANCE(339);
      END_STATE();
    case 298:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 299:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 300:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(357);
      END_STATE();
    case 301:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 302:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 303:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 304:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 305:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 306:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 307:
      if (eof) ADVANCE(309);
      ADVANCE_MAP(
        ' ', 338,
        '"', 350,
        '#', 50,
        '(', 230,
        '-', 8,
        '/', 9,
        '0', 353,
        '@', 12,
        'P', 211,
        'S', 189,
        'T', 293,
        'a', 44,
        'b', 213,
        'c', 16,
        'd', 76,
        'e', 147,
        'f', 20,
        'g', 150,
        'h', 21,
        'i', 105,
        'l', 77,
        'm', 17,
        'n', 22,
        'o', 201,
        'p', 39,
        'r', 78,
        's', 55,
        't', 115,
        'u', 173,
        'v', 37,
        'w', 116,
        '}', 349,
        0xab, 358,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(307);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 308:
      if (eof) ADVANCE(309);
      ADVANCE_MAP(
        '"', 350,
        '#', 50,
        '(', 230,
        '-', 8,
        '/', 9,
        '0', 353,
        '@', 12,
        'P', 211,
        'S', 189,
        'T', 293,
        'a', 44,
        'b', 213,
        'c', 16,
        'd', 76,
        'e', 147,
        'f', 20,
        'g', 150,
        'h', 21,
        'i', 105,
        'l', 77,
        'm', 17,
        'n', 22,
        'o', 201,
        'p', 39,
        'r', 78,
        's', 55,
        't', 115,
        'u', 173,
        'v', 37,
        'w', 116,
        '}', 349,
        0xab, 358,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_dash_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH_DASH);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_doc_comment_token1);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_doc_comment_token1);
      if (lookahead == '/') ADVANCE(312);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH);
      if (lookahead == '-') ADVANCE(311);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_type_storage);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_modifier_storage);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_illegal);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '_') ADVANCE(111);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_inductive);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_coinductive);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_structure);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_theorem);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_axiom);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_abbrev);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_lemma);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_constant);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_definition_command_token1);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_definition_token1);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_definition_token1);
      if (lookahead == '_') ADVANCE(217);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_definition_token1);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_definition_token1);
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_definition_token1);
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_definition_token1);
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_definition_token2);
      if ((!eof && set_contains(aux_sym_definition_token2_character_set_2, 11, lookahead))) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LPARENs_BANG_RPAREN_DQUOTE);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_string_interpolated_token1);
      if (lookahead == '{') ADVANCE(348);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(343);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_string_interpolated_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_string_interpolated_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_string_interpolated_token2);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_string_interpolated_token3);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_string_interpolated_token4);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(343);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_constant_language);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_constant_numeric);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_constant_numeric);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_constant_numeric);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_constant_numeric);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_constant_numeric);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_constant_numeric);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_u00ab);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_entity_name_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != 0xbb) ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_entity_name_token1);
      if (lookahead != 0 &&
          lookahead != 0xbb) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_u00bb);
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
  [7] = {.lex_state = 307},
  [8] = {.lex_state = 308},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 359},
  [31] = {.lex_state = 297},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_dash_comment] = ACTIONS(1),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_SLASH_DASH] = ACTIONS(1),
    [sym_type_storage] = ACTIONS(1),
    [sym_modifier_storage] = ACTIONS(1),
    [sym_illegal] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [anon_sym_inductive] = ACTIONS(1),
    [anon_sym_coinductive] = ACTIONS(1),
    [anon_sym_structure] = ACTIONS(1),
    [anon_sym_theorem] = ACTIONS(1),
    [anon_sym_axiom] = ACTIONS(1),
    [anon_sym_abbrev] = ACTIONS(1),
    [anon_sym_lemma] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_instance] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_constant] = ACTIONS(1),
    [aux_sym_definition_token1] = ACTIONS(1),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(1),
    [aux_sym_string_interpolated_token2] = ACTIONS(1),
    [aux_sym_string_interpolated_token3] = ACTIONS(1),
    [aux_sym_string_interpolated_token4] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_constant_language] = ACTIONS(1),
    [sym_constant_numeric] = ACTIONS(1),
    [anon_sym_u00ab] = ACTIONS(1),
    [anon_sym_u00bb] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(28),
    [sym_comment] = STATE(5),
    [sym_doc_comment] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_definition_command] = STATE(5),
    [sym_definition] = STATE(5),
    [sym_string_interpolated] = STATE(5),
    [sym_string_double] = STATE(5),
    [sym_entity_name] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_dash_comment] = ACTIONS(3),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(5),
    [anon_sym_SLASH_DASH] = ACTIONS(7),
    [sym_type_storage] = ACTIONS(9),
    [sym_modifier_storage] = ACTIONS(9),
    [sym_illegal] = ACTIONS(9),
    [sym_keyword] = ACTIONS(9),
    [anon_sym_inductive] = ACTIONS(11),
    [anon_sym_coinductive] = ACTIONS(11),
    [anon_sym_structure] = ACTIONS(11),
    [anon_sym_theorem] = ACTIONS(11),
    [anon_sym_axiom] = ACTIONS(11),
    [anon_sym_abbrev] = ACTIONS(11),
    [anon_sym_lemma] = ACTIONS(11),
    [anon_sym_def] = ACTIONS(11),
    [anon_sym_instance] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_constant] = ACTIONS(11),
    [aux_sym_definition_token1] = ACTIONS(13),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_constant_language] = ACTIONS(9),
    [sym_constant_numeric] = ACTIONS(9),
    [anon_sym_u00ab] = ACTIONS(19),
  },
  [2] = {
    [sym_source_file] = STATE(3),
    [sym_comment] = STATE(5),
    [sym_doc_comment] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_definition_command] = STATE(5),
    [sym_definition] = STATE(5),
    [sym_string_interpolated] = STATE(5),
    [sym_string_double] = STATE(5),
    [sym_entity_name] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_string_interpolated_repeat1] = STATE(3),
    [sym_dash_comment] = ACTIONS(3),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(5),
    [anon_sym_SLASH_DASH] = ACTIONS(7),
    [sym_type_storage] = ACTIONS(9),
    [sym_modifier_storage] = ACTIONS(9),
    [sym_illegal] = ACTIONS(9),
    [sym_keyword] = ACTIONS(9),
    [anon_sym_inductive] = ACTIONS(11),
    [anon_sym_coinductive] = ACTIONS(11),
    [anon_sym_structure] = ACTIONS(11),
    [anon_sym_theorem] = ACTIONS(11),
    [anon_sym_axiom] = ACTIONS(11),
    [anon_sym_abbrev] = ACTIONS(11),
    [anon_sym_lemma] = ACTIONS(11),
    [anon_sym_def] = ACTIONS(11),
    [anon_sym_instance] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_constant] = ACTIONS(11),
    [aux_sym_definition_token1] = ACTIONS(13),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_constant_language] = ACTIONS(9),
    [sym_constant_numeric] = ACTIONS(9),
    [anon_sym_u00ab] = ACTIONS(19),
  },
  [3] = {
    [sym_source_file] = STATE(4),
    [sym_comment] = STATE(5),
    [sym_doc_comment] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_definition_command] = STATE(5),
    [sym_definition] = STATE(5),
    [sym_string_interpolated] = STATE(5),
    [sym_string_double] = STATE(5),
    [sym_entity_name] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_string_interpolated_repeat1] = STATE(4),
    [sym_dash_comment] = ACTIONS(3),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(5),
    [anon_sym_SLASH_DASH] = ACTIONS(7),
    [sym_type_storage] = ACTIONS(9),
    [sym_modifier_storage] = ACTIONS(9),
    [sym_illegal] = ACTIONS(9),
    [sym_keyword] = ACTIONS(9),
    [anon_sym_inductive] = ACTIONS(11),
    [anon_sym_coinductive] = ACTIONS(11),
    [anon_sym_structure] = ACTIONS(11),
    [anon_sym_theorem] = ACTIONS(11),
    [anon_sym_axiom] = ACTIONS(11),
    [anon_sym_abbrev] = ACTIONS(11),
    [anon_sym_lemma] = ACTIONS(11),
    [anon_sym_def] = ACTIONS(11),
    [anon_sym_instance] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_constant] = ACTIONS(11),
    [aux_sym_definition_token1] = ACTIONS(13),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_constant_language] = ACTIONS(9),
    [sym_constant_numeric] = ACTIONS(9),
    [anon_sym_u00ab] = ACTIONS(19),
  },
  [4] = {
    [sym_source_file] = STATE(4),
    [sym_comment] = STATE(5),
    [sym_doc_comment] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_definition_command] = STATE(5),
    [sym_definition] = STATE(5),
    [sym_string_interpolated] = STATE(5),
    [sym_string_double] = STATE(5),
    [sym_entity_name] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_string_interpolated_repeat1] = STATE(4),
    [sym_dash_comment] = ACTIONS(25),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(28),
    [anon_sym_SLASH_DASH] = ACTIONS(31),
    [sym_type_storage] = ACTIONS(34),
    [sym_modifier_storage] = ACTIONS(34),
    [sym_illegal] = ACTIONS(34),
    [sym_keyword] = ACTIONS(34),
    [anon_sym_inductive] = ACTIONS(37),
    [anon_sym_coinductive] = ACTIONS(37),
    [anon_sym_structure] = ACTIONS(37),
    [anon_sym_theorem] = ACTIONS(37),
    [anon_sym_axiom] = ACTIONS(37),
    [anon_sym_abbrev] = ACTIONS(37),
    [anon_sym_lemma] = ACTIONS(37),
    [anon_sym_def] = ACTIONS(37),
    [anon_sym_instance] = ACTIONS(37),
    [anon_sym_class] = ACTIONS(37),
    [anon_sym_constant] = ACTIONS(37),
    [aux_sym_definition_token1] = ACTIONS(40),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(46),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [sym_constant_language] = ACTIONS(34),
    [sym_constant_numeric] = ACTIONS(34),
    [anon_sym_u00ab] = ACTIONS(51),
  },
  [5] = {
    [sym_comment] = STATE(6),
    [sym_doc_comment] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_definition_command] = STATE(6),
    [sym_definition] = STATE(6),
    [sym_string_interpolated] = STATE(6),
    [sym_string_double] = STATE(6),
    [sym_entity_name] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_dash_comment] = ACTIONS(3),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(5),
    [anon_sym_SLASH_DASH] = ACTIONS(7),
    [sym_type_storage] = ACTIONS(56),
    [sym_modifier_storage] = ACTIONS(56),
    [sym_illegal] = ACTIONS(56),
    [sym_keyword] = ACTIONS(56),
    [anon_sym_inductive] = ACTIONS(11),
    [anon_sym_coinductive] = ACTIONS(11),
    [anon_sym_structure] = ACTIONS(11),
    [anon_sym_theorem] = ACTIONS(11),
    [anon_sym_axiom] = ACTIONS(11),
    [anon_sym_abbrev] = ACTIONS(11),
    [anon_sym_lemma] = ACTIONS(11),
    [anon_sym_def] = ACTIONS(11),
    [anon_sym_instance] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_constant] = ACTIONS(11),
    [aux_sym_definition_token1] = ACTIONS(13),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_constant_language] = ACTIONS(56),
    [sym_constant_numeric] = ACTIONS(56),
    [anon_sym_u00ab] = ACTIONS(19),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [sym_doc_comment] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_definition_command] = STATE(6),
    [sym_definition] = STATE(6),
    [sym_string_interpolated] = STATE(6),
    [sym_string_double] = STATE(6),
    [sym_entity_name] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_dash_comment] = ACTIONS(60),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(63),
    [anon_sym_SLASH_DASH] = ACTIONS(66),
    [sym_type_storage] = ACTIONS(69),
    [sym_modifier_storage] = ACTIONS(69),
    [sym_illegal] = ACTIONS(69),
    [sym_keyword] = ACTIONS(69),
    [anon_sym_inductive] = ACTIONS(72),
    [anon_sym_coinductive] = ACTIONS(72),
    [anon_sym_structure] = ACTIONS(72),
    [anon_sym_theorem] = ACTIONS(72),
    [anon_sym_axiom] = ACTIONS(72),
    [anon_sym_abbrev] = ACTIONS(72),
    [anon_sym_lemma] = ACTIONS(72),
    [anon_sym_def] = ACTIONS(72),
    [anon_sym_instance] = ACTIONS(72),
    [anon_sym_class] = ACTIONS(72),
    [anon_sym_constant] = ACTIONS(72),
    [aux_sym_definition_token1] = ACTIONS(75),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_constant_language] = ACTIONS(69),
    [sym_constant_numeric] = ACTIONS(69),
    [anon_sym_u00ab] = ACTIONS(84),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_dash_comment] = ACTIONS(89),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(89),
    [anon_sym_SLASH_DASH] = ACTIONS(89),
    [sym_type_storage] = ACTIONS(89),
    [sym_modifier_storage] = ACTIONS(89),
    [sym_illegal] = ACTIONS(89),
    [sym_keyword] = ACTIONS(89),
    [anon_sym_inductive] = ACTIONS(89),
    [anon_sym_coinductive] = ACTIONS(89),
    [anon_sym_structure] = ACTIONS(89),
    [anon_sym_theorem] = ACTIONS(89),
    [anon_sym_axiom] = ACTIONS(89),
    [anon_sym_abbrev] = ACTIONS(89),
    [anon_sym_lemma] = ACTIONS(89),
    [anon_sym_def] = ACTIONS(89),
    [anon_sym_instance] = ACTIONS(89),
    [anon_sym_class] = ACTIONS(89),
    [anon_sym_constant] = ACTIONS(89),
    [aux_sym_definition_token1] = ACTIONS(89),
    [anon_sym_SPACE] = ACTIONS(91),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_constant_language] = ACTIONS(89),
    [sym_constant_numeric] = ACTIONS(89),
    [anon_sym_u00ab] = ACTIONS(89),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_dash_comment] = ACTIONS(93),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(93),
    [anon_sym_SLASH_DASH] = ACTIONS(95),
    [sym_type_storage] = ACTIONS(93),
    [sym_modifier_storage] = ACTIONS(93),
    [sym_illegal] = ACTIONS(93),
    [sym_keyword] = ACTIONS(93),
    [anon_sym_inductive] = ACTIONS(93),
    [anon_sym_coinductive] = ACTIONS(93),
    [anon_sym_structure] = ACTIONS(93),
    [anon_sym_theorem] = ACTIONS(93),
    [anon_sym_axiom] = ACTIONS(93),
    [anon_sym_abbrev] = ACTIONS(93),
    [anon_sym_lemma] = ACTIONS(93),
    [anon_sym_def] = ACTIONS(93),
    [anon_sym_instance] = ACTIONS(93),
    [anon_sym_class] = ACTIONS(93),
    [anon_sym_constant] = ACTIONS(93),
    [aux_sym_definition_command_token1] = ACTIONS(97),
    [aux_sym_definition_token1] = ACTIONS(95),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [sym_constant_language] = ACTIONS(93),
    [sym_constant_numeric] = ACTIONS(93),
    [anon_sym_u00ab] = ACTIONS(93),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_dash_comment] = ACTIONS(99),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(99),
    [anon_sym_SLASH_DASH] = ACTIONS(101),
    [sym_type_storage] = ACTIONS(99),
    [sym_modifier_storage] = ACTIONS(99),
    [sym_illegal] = ACTIONS(99),
    [sym_keyword] = ACTIONS(99),
    [anon_sym_inductive] = ACTIONS(99),
    [anon_sym_coinductive] = ACTIONS(99),
    [anon_sym_structure] = ACTIONS(99),
    [anon_sym_theorem] = ACTIONS(99),
    [anon_sym_axiom] = ACTIONS(99),
    [anon_sym_abbrev] = ACTIONS(99),
    [anon_sym_lemma] = ACTIONS(99),
    [anon_sym_def] = ACTIONS(99),
    [anon_sym_instance] = ACTIONS(99),
    [anon_sym_class] = ACTIONS(99),
    [anon_sym_constant] = ACTIONS(99),
    [aux_sym_definition_token1] = ACTIONS(101),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [sym_constant_language] = ACTIONS(99),
    [sym_constant_numeric] = ACTIONS(99),
    [anon_sym_u00ab] = ACTIONS(99),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_dash_comment] = ACTIONS(103),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(103),
    [anon_sym_SLASH_DASH] = ACTIONS(105),
    [sym_type_storage] = ACTIONS(103),
    [sym_modifier_storage] = ACTIONS(103),
    [sym_illegal] = ACTIONS(103),
    [sym_keyword] = ACTIONS(103),
    [anon_sym_inductive] = ACTIONS(103),
    [anon_sym_coinductive] = ACTIONS(103),
    [anon_sym_structure] = ACTIONS(103),
    [anon_sym_theorem] = ACTIONS(103),
    [anon_sym_axiom] = ACTIONS(103),
    [anon_sym_abbrev] = ACTIONS(103),
    [anon_sym_lemma] = ACTIONS(103),
    [anon_sym_def] = ACTIONS(103),
    [anon_sym_instance] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(103),
    [anon_sym_constant] = ACTIONS(103),
    [aux_sym_definition_token1] = ACTIONS(105),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [sym_constant_language] = ACTIONS(103),
    [sym_constant_numeric] = ACTIONS(103),
    [anon_sym_u00ab] = ACTIONS(103),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_dash_comment] = ACTIONS(107),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(107),
    [anon_sym_SLASH_DASH] = ACTIONS(109),
    [sym_type_storage] = ACTIONS(107),
    [sym_modifier_storage] = ACTIONS(107),
    [sym_illegal] = ACTIONS(107),
    [sym_keyword] = ACTIONS(107),
    [anon_sym_inductive] = ACTIONS(107),
    [anon_sym_coinductive] = ACTIONS(107),
    [anon_sym_structure] = ACTIONS(107),
    [anon_sym_theorem] = ACTIONS(107),
    [anon_sym_axiom] = ACTIONS(107),
    [anon_sym_abbrev] = ACTIONS(107),
    [anon_sym_lemma] = ACTIONS(107),
    [anon_sym_def] = ACTIONS(107),
    [anon_sym_instance] = ACTIONS(107),
    [anon_sym_class] = ACTIONS(107),
    [anon_sym_constant] = ACTIONS(107),
    [aux_sym_definition_token1] = ACTIONS(109),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_constant_language] = ACTIONS(107),
    [sym_constant_numeric] = ACTIONS(107),
    [anon_sym_u00ab] = ACTIONS(107),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_dash_comment] = ACTIONS(111),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(111),
    [anon_sym_SLASH_DASH] = ACTIONS(113),
    [sym_type_storage] = ACTIONS(111),
    [sym_modifier_storage] = ACTIONS(111),
    [sym_illegal] = ACTIONS(111),
    [sym_keyword] = ACTIONS(111),
    [anon_sym_inductive] = ACTIONS(111),
    [anon_sym_coinductive] = ACTIONS(111),
    [anon_sym_structure] = ACTIONS(111),
    [anon_sym_theorem] = ACTIONS(111),
    [anon_sym_axiom] = ACTIONS(111),
    [anon_sym_abbrev] = ACTIONS(111),
    [anon_sym_lemma] = ACTIONS(111),
    [anon_sym_def] = ACTIONS(111),
    [anon_sym_instance] = ACTIONS(111),
    [anon_sym_class] = ACTIONS(111),
    [anon_sym_constant] = ACTIONS(111),
    [aux_sym_definition_token1] = ACTIONS(113),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [sym_constant_language] = ACTIONS(111),
    [sym_constant_numeric] = ACTIONS(111),
    [anon_sym_u00ab] = ACTIONS(111),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_dash_comment] = ACTIONS(115),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(115),
    [anon_sym_SLASH_DASH] = ACTIONS(117),
    [sym_type_storage] = ACTIONS(115),
    [sym_modifier_storage] = ACTIONS(115),
    [sym_illegal] = ACTIONS(115),
    [sym_keyword] = ACTIONS(115),
    [anon_sym_inductive] = ACTIONS(115),
    [anon_sym_coinductive] = ACTIONS(115),
    [anon_sym_structure] = ACTIONS(115),
    [anon_sym_theorem] = ACTIONS(115),
    [anon_sym_axiom] = ACTIONS(115),
    [anon_sym_abbrev] = ACTIONS(115),
    [anon_sym_lemma] = ACTIONS(115),
    [anon_sym_def] = ACTIONS(115),
    [anon_sym_instance] = ACTIONS(115),
    [anon_sym_class] = ACTIONS(115),
    [anon_sym_constant] = ACTIONS(115),
    [aux_sym_definition_token1] = ACTIONS(117),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [sym_constant_language] = ACTIONS(115),
    [sym_constant_numeric] = ACTIONS(115),
    [anon_sym_u00ab] = ACTIONS(115),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_dash_comment] = ACTIONS(119),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(119),
    [anon_sym_SLASH_DASH] = ACTIONS(121),
    [sym_type_storage] = ACTIONS(119),
    [sym_modifier_storage] = ACTIONS(119),
    [sym_illegal] = ACTIONS(119),
    [sym_keyword] = ACTIONS(119),
    [anon_sym_inductive] = ACTIONS(119),
    [anon_sym_coinductive] = ACTIONS(119),
    [anon_sym_structure] = ACTIONS(119),
    [anon_sym_theorem] = ACTIONS(119),
    [anon_sym_axiom] = ACTIONS(119),
    [anon_sym_abbrev] = ACTIONS(119),
    [anon_sym_lemma] = ACTIONS(119),
    [anon_sym_def] = ACTIONS(119),
    [anon_sym_instance] = ACTIONS(119),
    [anon_sym_class] = ACTIONS(119),
    [anon_sym_constant] = ACTIONS(119),
    [aux_sym_definition_token1] = ACTIONS(121),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [sym_constant_language] = ACTIONS(119),
    [sym_constant_numeric] = ACTIONS(119),
    [anon_sym_u00ab] = ACTIONS(119),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_dash_comment] = ACTIONS(123),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(123),
    [anon_sym_SLASH_DASH] = ACTIONS(125),
    [sym_type_storage] = ACTIONS(123),
    [sym_modifier_storage] = ACTIONS(123),
    [sym_illegal] = ACTIONS(123),
    [sym_keyword] = ACTIONS(123),
    [anon_sym_inductive] = ACTIONS(123),
    [anon_sym_coinductive] = ACTIONS(123),
    [anon_sym_structure] = ACTIONS(123),
    [anon_sym_theorem] = ACTIONS(123),
    [anon_sym_axiom] = ACTIONS(123),
    [anon_sym_abbrev] = ACTIONS(123),
    [anon_sym_lemma] = ACTIONS(123),
    [anon_sym_def] = ACTIONS(123),
    [anon_sym_instance] = ACTIONS(123),
    [anon_sym_class] = ACTIONS(123),
    [anon_sym_constant] = ACTIONS(123),
    [aux_sym_definition_token1] = ACTIONS(125),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_constant_language] = ACTIONS(123),
    [sym_constant_numeric] = ACTIONS(123),
    [anon_sym_u00ab] = ACTIONS(123),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_dash_comment] = ACTIONS(127),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(127),
    [anon_sym_SLASH_DASH] = ACTIONS(129),
    [sym_type_storage] = ACTIONS(127),
    [sym_modifier_storage] = ACTIONS(127),
    [sym_illegal] = ACTIONS(127),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_inductive] = ACTIONS(127),
    [anon_sym_coinductive] = ACTIONS(127),
    [anon_sym_structure] = ACTIONS(127),
    [anon_sym_theorem] = ACTIONS(127),
    [anon_sym_axiom] = ACTIONS(127),
    [anon_sym_abbrev] = ACTIONS(127),
    [anon_sym_lemma] = ACTIONS(127),
    [anon_sym_def] = ACTIONS(127),
    [anon_sym_instance] = ACTIONS(127),
    [anon_sym_class] = ACTIONS(127),
    [anon_sym_constant] = ACTIONS(127),
    [aux_sym_definition_token1] = ACTIONS(129),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_constant_language] = ACTIONS(127),
    [sym_constant_numeric] = ACTIONS(127),
    [anon_sym_u00ab] = ACTIONS(127),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_dash_comment] = ACTIONS(131),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(131),
    [anon_sym_SLASH_DASH] = ACTIONS(133),
    [sym_type_storage] = ACTIONS(131),
    [sym_modifier_storage] = ACTIONS(131),
    [sym_illegal] = ACTIONS(131),
    [sym_keyword] = ACTIONS(131),
    [anon_sym_inductive] = ACTIONS(131),
    [anon_sym_coinductive] = ACTIONS(131),
    [anon_sym_structure] = ACTIONS(131),
    [anon_sym_theorem] = ACTIONS(131),
    [anon_sym_axiom] = ACTIONS(131),
    [anon_sym_abbrev] = ACTIONS(131),
    [anon_sym_lemma] = ACTIONS(131),
    [anon_sym_def] = ACTIONS(131),
    [anon_sym_instance] = ACTIONS(131),
    [anon_sym_class] = ACTIONS(131),
    [anon_sym_constant] = ACTIONS(131),
    [aux_sym_definition_token1] = ACTIONS(133),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [sym_constant_language] = ACTIONS(131),
    [sym_constant_numeric] = ACTIONS(131),
    [anon_sym_u00ab] = ACTIONS(131),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_dash_comment] = ACTIONS(135),
    [anon_sym_SLASH_DASH_DASH] = ACTIONS(135),
    [anon_sym_SLASH_DASH] = ACTIONS(137),
    [sym_type_storage] = ACTIONS(135),
    [sym_modifier_storage] = ACTIONS(135),
    [sym_illegal] = ACTIONS(135),
    [sym_keyword] = ACTIONS(135),
    [anon_sym_inductive] = ACTIONS(135),
    [anon_sym_coinductive] = ACTIONS(135),
    [anon_sym_structure] = ACTIONS(135),
    [anon_sym_theorem] = ACTIONS(135),
    [anon_sym_axiom] = ACTIONS(135),
    [anon_sym_abbrev] = ACTIONS(135),
    [anon_sym_lemma] = ACTIONS(135),
    [anon_sym_def] = ACTIONS(135),
    [anon_sym_instance] = ACTIONS(135),
    [anon_sym_class] = ACTIONS(135),
    [anon_sym_constant] = ACTIONS(135),
    [aux_sym_definition_token1] = ACTIONS(137),
    [anon_sym_LPARENs_BANG_RPAREN_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [sym_constant_language] = ACTIONS(135),
    [sym_constant_numeric] = ACTIONS(135),
    [anon_sym_u00ab] = ACTIONS(135),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym_string_interpolated_repeat2,
    ACTIONS(139), 4,
      aux_sym_string_interpolated_token1,
      aux_sym_string_interpolated_token2,
      aux_sym_string_interpolated_token3,
      aux_sym_string_interpolated_token4,
  [16] = 4,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym_string_interpolated_repeat2,
    ACTIONS(145), 4,
      aux_sym_string_interpolated_token1,
      aux_sym_string_interpolated_token2,
      aux_sym_string_interpolated_token3,
      aux_sym_string_interpolated_token4,
  [32] = 4,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym_string_interpolated_repeat2,
    ACTIONS(153), 4,
      aux_sym_string_interpolated_token1,
      aux_sym_string_interpolated_token2,
      aux_sym_string_interpolated_token3,
      aux_sym_string_interpolated_token4,
  [48] = 4,
    ACTIONS(157), 1,
      aux_sym_string_interpolated_token1,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_string_double_repeat1,
    ACTIONS(159), 3,
      aux_sym_string_interpolated_token2,
      aux_sym_string_interpolated_token3,
      aux_sym_string_interpolated_token4,
  [63] = 1,
    ACTIONS(151), 6,
      aux_sym_string_interpolated_token1,
      aux_sym_string_interpolated_token2,
      aux_sym_string_interpolated_token3,
      aux_sym_string_interpolated_token4,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [72] = 4,
    ACTIONS(163), 1,
      aux_sym_string_interpolated_token1,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_string_double_repeat1,
    ACTIONS(166), 3,
      aux_sym_string_interpolated_token2,
      aux_sym_string_interpolated_token3,
      aux_sym_string_interpolated_token4,
  [87] = 4,
    ACTIONS(171), 1,
      aux_sym_string_interpolated_token1,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_string_double_repeat1,
    ACTIONS(173), 3,
      aux_sym_string_interpolated_token2,
      aux_sym_string_interpolated_token3,
      aux_sym_string_interpolated_token4,
  [102] = 1,
    ACTIONS(177), 6,
      aux_sym_string_interpolated_token1,
      aux_sym_string_interpolated_token2,
      aux_sym_string_interpolated_token3,
      aux_sym_string_interpolated_token4,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [111] = 1,
    ACTIONS(179), 1,
      aux_sym_doc_comment_token1,
  [115] = 1,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
  [119] = 1,
    ACTIONS(183), 1,
      aux_sym_doc_comment_token1,
  [123] = 1,
    ACTIONS(185), 1,
      aux_sym_entity_name_token1,
  [127] = 1,
    ACTIONS(187), 1,
      aux_sym_definition_token2,
  [131] = 1,
    ACTIONS(189), 1,
      anon_sym_u00bb,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 16,
  [SMALL_STATE(21)] = 32,
  [SMALL_STATE(22)] = 48,
  [SMALL_STATE(23)] = 63,
  [SMALL_STATE(24)] = 72,
  [SMALL_STATE(25)] = 87,
  [SMALL_STATE(26)] = 102,
  [SMALL_STATE(27)] = 111,
  [SMALL_STATE(28)] = 115,
  [SMALL_STATE(29)] = 119,
  [SMALL_STATE(30)] = 123,
  [SMALL_STATE(31)] = 127,
  [SMALL_STATE(32)] = 131,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_command, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition_command, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_command, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition_command, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolated, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolated, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_double, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_double, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolated, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolated, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_name, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_name, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_double, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_double, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat2, 2, 0, 0), SHIFT_REPEAT(20),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat2, 2, 0, 0), SHIFT_REPEAT(2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat2, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_double_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_double_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_double_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat2, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [181] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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

TS_PUBLIC const TSLanguage *tree_sitter_lean4(void) {
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
