FROM alpine:latest
WORKDIR /app

RUN apk update
RUN apk add build-base cmake

COPY . /app

RUN ["make","prepare"]
RUN ["make", "builddeps"]
RUN ["make", "compile"]
RUN ["make", "run"]
