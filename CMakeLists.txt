# ───────────────────────────────────────────
# | MAIN SECTION: PROJECT |
# ───────────────────────────────────────────
# ? Why this exists: Configures the C++17 build for The Argus.
cmake_minimum_required(VERSION 3.16)
project(TheArgus LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# ───────────────────────────────────────────
# | MAIN SECTION: CORE LIBRARY |
# ───────────────────────────────────────────
# ? Why this exists: Builds the product and inventory implementation separately.
add_library(argus_core STATIC
  src/core/product.cpp
  src/core/inventory.cpp
)

target_include_directories(argus_core PUBLIC src)
target_compile_options(argus_core PRIVATE -Wall -Wextra)

# ───────────────────────────────────────────
# | MAIN SECTION: EXECUTABLE |
# ───────────────────────────────────────────
# ? Why this exists: Creates the command-line entry point.
add_executable(argus
  src/main.cpp
  src/cli/menu.cpp
)

target_link_libraries(argus PRIVATE argus_core)
