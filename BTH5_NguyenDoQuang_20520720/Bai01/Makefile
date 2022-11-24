CFLAGS = -std=c++17 -O2

VulkanTest: main.cpp NhanSu.cpp NhanSu.h GiangVien.cpp GiangVien.h TroGiang.cpp TroGiang.h NghienCuuVien.cpp NghienCuuVien.h ChuyenVien.cpp ChuyenVien.h
	g++ $(CFLAGS) -o VulkanTest main.cpp
.PHONY: test clean

test: VulkanTest
	./VulkanTest
clean:
	rm -f VulkanTest
