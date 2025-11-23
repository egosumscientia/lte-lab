FROM debian:12
RUN apt-get update && apt-get install -y cmake g++ make libsctp-dev lksctp-tools iproute2 && rm -rf /var/lib/apt/lists/*
WORKDIR /UERANSIM
COPY . .
RUN mkdir build && cd build && cmake .. && make -j$(nproc)
CMD ["/bin/bash"]
