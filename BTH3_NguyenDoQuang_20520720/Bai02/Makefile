CFLAGS = -std=c++17 -O2

VulkanTest: main.cpp HocSinh.cpp HocSinh.h LopHoc.cpp LopHoc.h
	g++ $(CFLAGS) -o VulkanTest main.cpp
.PHONY: test clean

test: VulkanTest
	./VulkanTest
clean:
	rm -f VulkanTest
