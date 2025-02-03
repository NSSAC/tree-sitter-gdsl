package tree_sitter_gdsl_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_gdsl "github.com/nssac/tree-sitter-gdsl/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gdsl.Language())
	if language == nil {
		t.Errorf("Error loading Gdsl grammar")
	}
}
