CFLAGS = -std=c++17 -O2 -g
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi -lGL -lglut

opengl: opengl.cpp
	mkdir -p obj/
	g++ $(CFLAGS) -o obj/run $^ $(LDFLAGS)

vulkan: vulkan.cpp
	mkdir -p obj/
	g++ $(CFLAGS) -o obj/run $^ $(LDFLAGS)

.PHONY: test clean

test: obj/run
	./obj/run

debug: obj/run
	gdb obj/run

clean:
	rm -f obj/run