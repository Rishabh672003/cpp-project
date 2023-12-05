project = cherno
mode = Debug

all: compile

prepare:
	mkdir build

builddeps:
	cmake -B build -S . -DCMAKE_PROJECT_TOP_LEVEL_INCLUDES=./conan_provider.cmake -DCMAKE_BUILD_TYPE=$(mode)

compile:
	cmake --build build --config $(mode)

run:
	./build/$(project)

clean:
	rm -rf build/ CMakeUserPresets.json

cleanbin:
	rm -rf build/$(project)
