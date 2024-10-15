import XCTest
import SwiftTreeSitter
import TreeSitterLean4

final class TreeSitterLean4Tests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_lean4())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Lean4 grammar")
    }
}
