FROM alpine:latest
WORKDIR /app

RUN apk update
RUN apk add build-base cmake gtk4.0 gtkmm4 pkgconfig gtk4.0-dev

COPY . /app

RUN ["cmake","CMakeLists.txt"]
RUN ["cmake", "--build", "."]
