CFLAGS = -std=c++17 -O2

VulkanTest: main.cpp CanBo.cpp CanBo.h CanBoNhaNuoc.cpp CanBoNhaNuoc.h CanBoHopDong.cpp CanBoHopDong.h QLCB.cpp QLCB.h
	g++ $(CFLAGS) -o VulkanTest main.cpp
.PHONY: test clean

test: VulkanTest
	./VulkanTest
clean:
	rm -f VulkanTest
