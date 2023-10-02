.PHONY: clean all

all:
	mkdir -p build
	cd build && cmake ..
	$(MAKE) -C build
	mv build/main /home/juanda/test

clean:
	rm -rf build
	rm *.log
