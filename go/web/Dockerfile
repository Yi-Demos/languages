# Choose whatever you want, version >= 1.16
FROM golang:1.22-alpine

WORKDIR /app

# RUN go mod init web
# RUN go mod tidy
# RUN go mod download

RUN go install github.com/cosmtrek/air@latest

CMD ["air", "-c", ".air.toml"]