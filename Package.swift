// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterGdsl",
    products: [
        .library(name: "TreeSitterGdsl", targets: ["TreeSitterGdsl"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterGdsl",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterGdslTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterGdsl",
            ],
            path: "bindings/swift/TreeSitterGdslTests"
        )
    ],
    cLanguageStandard: .c11
)
