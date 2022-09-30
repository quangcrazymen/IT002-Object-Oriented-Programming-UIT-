CFLAGS = -std=c++17 -O2

VulkanTest: main.cpp Triangle.h Triangle.cpp Point.h Point.cpp
	g++ $(CFLAGS) -o VulkanTest main.cpp
.PHONY: test clean

test: VulkanTest
	./VulkanTest
clean:
	rm -f VulkanTest
