CFLAGS = -std=c++17 -O2

VulkanTest: main.cpp NhanVien.cpp NhanVien.h GiangVien.cpp GiangVien.h NghienCuuVien.cpp NghienCuuVien.h NhanVienVanPhong.cpp NhanVienVanPhong.h QLNV.cpp QLNV.h
	g++ $(CFLAGS) -o VulkanTest main.cpp
.PHONY: test clean

test: VulkanTest
	./VulkanTest
clean:
	rm -f VulkanTest
