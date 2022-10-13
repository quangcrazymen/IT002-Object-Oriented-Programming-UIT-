CFLAGS = -std=c++17 -O2

VulkanTest: main.cpp MangMotChieu.cpp MangMotChieu.h
	g++ $(CFLAGS) -o VulkanTest main.cpp
.PHONY: test clean

test: VulkanTest
	./VulkanTest
clean:
	rm -f VulkanTest
