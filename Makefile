TARGET = $(shell ls -t | grep -e \.cpp | head -n1)

build:
	g++ -o run $(TARGET)
	./run