# The Argus

A command-line app for managing products and inventory, written in C++17.

Add products, track stock, search and sort your inventory, and keep your data
saved between sessions. No external dependencies required.

## Features

- Add, view, edit and delete products
- Search by name or ID
- Sort and filter by price, name or quantity
- Stock reports: total value, total weight, low-stock items
- Save and load inventory from a file

## Getting Started

### Requirements

- A C++17 compiler (GCC, Clang or MSVC)
- CMake 3.16 or newer

### Build

```bash
cmake -S . -B build
cmake --build build
```

### Run

```bash
./build/argus          # Linux / macOS
.\build\argus.exe      # Windows
```

## Project Structure

```
src/
├── core/      Product and inventory logic
├── cli/       Command-line interface
└── main.cpp   Entry point
tests/         Unit tests
data/          Sample inventory files
docs/          Notes and screenshots
```

## Roadmap

- [x] Project setup
- [ ] Product and inventory core
- [ ] CLI menu and CRUD
- [ ] File save/load
- [ ] Sorting, filtering and reports
- [ ] Tests and first release
- [ ] Graphical interface

## License

MIT. See `LICENSE` for details.
