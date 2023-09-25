# Sample-cpp-project

A simple Cpp project, made to learn Cmake and CPP

## Build Instruction

Basic Requirements: Cmake, gtk-3.0, gtkmm

To Install just run

```sh
sudo pacman -Syu --noconfirm --needed cmake gtk3 gtk4 gtkmm3 gtkmm-4.0
```

**Now to build Cmake stuff** do :

```sh
cmake CMakeLists.txt
```

**Then to build the app do**:

```sh
make GtkApp
```

It will build the binary and place it in `bin` directory

so you can run it using: `./bin/GtkApp`
