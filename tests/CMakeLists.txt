# Dodaj GoogleTest
# Znajdź pakiet GTest zainstalowany przez Homebrew
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
include_directories(..)  # Dodaj katalog główny projektu do ścieżek dołączania

# Dodaj plik wykonywalny testów
add_executable(runTests test_koszykarz.cpp ../koszykarz.cpp)

# Połącz testy z bibliotekami GTest i pthread
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)