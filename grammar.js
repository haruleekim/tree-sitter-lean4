/**
 * @file Lean4 grammar for tree-sitter
 * @author Haru Kim <haruleekim@icloud.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "lean4",

  rules: {
    source_file: ($) =>
      prec.right(
        repeat1(
          choice(
            $.comment,
            $.type_storage,
            $.modifier_storage,
            $.illegal,
            $.keyword,
            $.definition_command,
            $.definition,
            $.string_interpolated,
            $.string_double,
            $.constant_language,
            $.constant_numeric,
            $.entity_name,
          ),
        ),
      ),

    comment: ($) =>
      choice(
        alias($.dash_comment, $.line_comment),
        $.doc_comment,
        $.block_comment,
      ),

    dash_comment: ($) => token(seq("--", /.*/)),

    doc_comment: ($) => seq("/--", /[^-]*-\/?/),

    block_comment: ($) => seq("/-", /[^-]*-\/?/),

    type_storage: ($) => token(choice("Prop", "Type", "Sort")),

    modifier_storage: ($) =>
      token(
        choice(
          seq("attribute [", /[^\]]*/, "]"),
          seq("@[", /[^\]]*/, "]"),
          "global",
          "local",
          "scoped",
          "partial",
          "unsafe",
          "private",
          "protected",
          "noncomputable",
        ),
      ),

    illegal: ($) => token(choice("sorry", "admit", "stop")),

    keyword: ($) =>
      token(
        seq("#", choice("print", "eval", "reduce", "check", "check_failure")),
      ),

    definition_command: ($) =>
      seq(
        choice(
          "inductive",
          "coinductive",
          "structure",
          "theorem",
          "axiom",
          "abbrev",
          "lemma",
          "def",
          "instance",
          "class",
          "constant",
        ),
        optional(/\s+\{[^}]*\}/),
      ),

    definition: ($) =>
      seq(
        token(
          choice(
            "theorem",
            "show",
            "have",
            "from",
            "suffices",
            "nomatch",
            "def",
            "class",
            "structure",
            "instance",
            "set_option",
            "initialize",
            "builtin_initialize",
            "example",
            "inductive",
            "coinductive",
            "axiom",
            "constant",
            "universe",
            "universes",
            "variable",
            "variables",
            "import",
            "open",
            "export",
            "theory",
            "prelude",
            "renaming",
            "hiding",
            "exposing",
            "do",
            "by",
            "let",
            "extends",
            "mutual",
            "mut",
            "where",
            "rec",
            "syntax",
            "macro_rules",
            "macro",
            "deriving",
            "fun",
            "section",
            "namespace",
            "end",
            "infix",
            "infixl",
            "infixr",
            "postfix",
            "prefix",
            "notation",
            "abbrev",
            "if",
            "then",
            "else",
            "calc",
            "match",
            "with",
            "for",
            "in",
            "unless",
            "try",
            "catch",
            "finally",
            "return",
            "continue",
            "break",
          ),
        ),
        optional(seq(" ", /[^:«»\(\)\{\}\[\]\s=→λ∀?][^:«»\(\)\{\}\[\]\s]*/)),
      ),

    string_interpolated: ($) =>
      seq(
        '(s!)"',
        repeat(
          choice(
            /[^"\\]+/,
            /\\[\\'ntr"]/,
            /\\x[0-9A-Fa-f]{2}/,
            /\\u[0-9A-Fa-f]{4}/,
            seq("{", repeat($.source_file), "}"),
          ),
        ),
        token('"'),
      ),

    string_double: ($) =>
      seq(
        '"',
        repeat(
          choice(
            /[^"\\]+/,
            /\\[\\'ntr"]/,
            /\\x[0-9A-Fa-f]{2}/,
            /\\u[0-9A-Fa-f]{4}/,
          ),
        ),
        token('"'),
      ),

    constant_language: ($) => token(choice("true", "false")),

    constant_numeric: ($) =>
      token(
        choice(
          /[0-9]+/,
          /0[xX][0-9a-fA-F]+/,
          /-?(0|[1-9][0-9]*)(\.[0-9]+)?([eE][+-]?[0-9]+)?/,
        ),
      ),

    entity_name: ($) => seq("«", /[^»]*/, "»"),
  },
});
