FROM archlinux:base-devel
WORKDIR /app
RUN pacman -Sy --noconfirm --needed glibc reflector
RUN reflector --country "United States, France, Germany,India, Norway, Australia, Sweden" \
      --verbose \
      --sort rate \
      --protocol https,http \
      --latest 20 \
      --save /etc/pacman.d/mirrorlist

RUN pacman -S --noconfirm --needed cmake gtk4 gtkmm-4.0
COPY . /app

RUN ["cmake","CMakeLists.txt"]
RUN ["make"]
