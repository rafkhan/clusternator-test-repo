#FROM gcc:4.9
#COPY . /usr/src/myapp
#WORKDIR /usr/src/myapp
#RUN gcc -o daemon daemon.c
#CMD ["./daemon"]

FROM ubuntu:14.04
CMD ["/bin/sh", "-c", "while true; do echo hello world; sleep 1; done"]
