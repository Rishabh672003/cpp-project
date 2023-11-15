# Sample-cpp-project-with-conan

This has been built using conan2 specifically conan2-cmake

## Instruction to setup and build the project

1. Setup the dependency using conan and cmake using the `conan_provider.cmake`

```sh
cmake -B build -S . -DCMAKE_PROJECT_TOP_LEVEL_INCLUDES=./conan_provider.cmake -DCMAKE_BUILD_TYPE=Debug
```

2. Now to build the project use Cmake again

```sh
cmake --build build --config Debug
```

## Makefile

NOW has a simple Makefile so you can just do

1. `make prepare`
2. `make builddeps`
3. `make compile`
4. `make run`

### Things to keep in mind

1. Don't forget to include packages in `conanfile.txt`
2. Also don't forget to include the required packages in `CMakeLists.txt` using `find_package(<Package Name> REQUIRED)` and `target_link_libraries(cherno PRIVATE <package link path>)`
