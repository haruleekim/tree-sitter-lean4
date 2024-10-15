// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterLean4",
    products: [
        .library(name: "TreeSitterLean4", targets: ["TreeSitterLean4"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterLean4",
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
            name: "TreeSitterLean4Tests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterLean4",
            ],
            path: "bindings/swift/TreeSitterLean4Tests"
        )
    ],
    cLanguageStandard: .c11
)
