CFLAGS = -std=c++17 -O2

VulkanTest: main.cpp DongVat.cpp DongVat.h Bo.h Bo.cpp Cuu.h Cuu.cpp De.cpp De.h
	g++ $(CFLAGS) -o VulkanTest main.cpp
.PHONY: test clean

test: VulkanTest
	./VulkanTest
clean:
	rm -f VulkanTest
