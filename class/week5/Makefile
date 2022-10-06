CFLAGS = -std=c++17 -O2

VulkanTest: main.cpp Point.cpp Point.h Triangle.h Triangle.cpp
	g++ $(CFLAGS) -o VulkanTest main.cpp
.PHONY: test clean

test: VulkanTest
	./VulkanTest
clean:
	rm -f VulkanTest
