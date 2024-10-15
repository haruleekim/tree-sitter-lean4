package tree_sitter_lean4_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_lean4 "github.com/haruleekim/tree-sitter-lean4/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_lean4.Language())
	if language == nil {
		t.Errorf("Error loading Lean4 grammar")
	}
}
