CFLAGS = -std=c++17 -O2

VulkanTest: main.cpp Candidate.h Candidate.cpp TestCandidate.h TestCandidate.cpp
	g++ $(CFLAGS) -o VulkanTest main.cpp
.PHONY: test clean

test: VulkanTest
	./VulkanTest
clean:
	rm -f VulkanTest
