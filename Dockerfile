FROM debian:bullseye-slim

RUN dpkg --add-architecture i386 && \
    apt-get update && \
    apt-get install -y \
        libc6:i386 \
        libncurses5:i386 \
        libstdc++6:i386 \
        gdb \
        strace \
        ltrace \
        binutils \
        elfutils \
        file \
        python3

WORKDIR /app

COPY . .

CMD ["/bin/bash"]
