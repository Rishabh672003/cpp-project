FROM alpine:latest
WORKDIR /app

RUN apk update
RUN apk add build-base cmake git gtkmm4-dev pkgconfig gtk4.0-dev

COPY . /app

RUN ["make", "builddeps"]
RUN ["make", "compile"]
RUN ["make", "run"]
