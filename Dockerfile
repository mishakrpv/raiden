FROM alpine:latest

RUN apk add --no-cache build-base

WORKDIR /app

COPY . .

WORKDIR src/core

RUN gcc -o raiden raiden.c

CMD ["/app/src/core/raiden"]