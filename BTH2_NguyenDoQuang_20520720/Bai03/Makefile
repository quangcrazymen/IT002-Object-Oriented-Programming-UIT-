CFLAGS = -std=c++17 -O2

VulkanTest: main.cpp PhanSo.cpp PhanSo.h DSPhanSo.cpp DSPhanSo.h
	g++ $(CFLAGS) -o VulkanTest main.cpp
.PHONY: test clean

test: VulkanTest
	./VulkanTest
clean:
	rm -f VulkanTest
