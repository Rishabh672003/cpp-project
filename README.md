# Sample-cpp-project-with-cpm

This has been built using CPM specifically cpm.cmake

## Instruction to setup and build the project

I have given a makefile so you can just do 

- `make prepare`
- `make builddeps`
- `make compile`

### Things to keep in mind

1. Don't forget to include packages in `CMakeLists.txt`
2. Also don't forget to include the required packages in `CMakeLists.txt` using `CPMAddPackage(<Package Name>)` and `target_link_libraries(cherno PRIVATE <package link path>)`
