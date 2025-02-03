import XCTest
import SwiftTreeSitter
import TreeSitterGdsl

final class TreeSitterGdslTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_gdsl())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Gdsl grammar")
    }
}
