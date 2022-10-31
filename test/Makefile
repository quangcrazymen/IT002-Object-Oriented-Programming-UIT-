CFLAGS = -std=c++17

VulkanTest: main7.cpp
	g++ $(CFLAGS) -o VulkanTest main7.cpp
.PHONY: test clean

test: VulkanTest
	./VulkanTest
clean:
	rm -f VulkanTest
