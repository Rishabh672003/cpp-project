FROM alpine:latest
WORKDIR /app

RUN apk update
RUN apk add build-base cmake gtkmm4-dev pkgconfig gtk4.0-dev

COPY . /app

RUN ["cmake","CMakeLists.txt"]
RUN ["cmake", "--build", "."]
