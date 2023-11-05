#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/fast_noise_lite.hpp>


namespace godot {

class GDExample : public Object {
	GDCLASS(GDExample, Object)

private:
    FastNoiseLite* test;

protected:
	static void _bind_methods();

public:
	GDExample();
	~GDExample();
    
    void set_test(FastNoiseLite* noise) { memfree(test); test = noise; }
    FastNoiseLite* get_test() { return test; }
};

}

#endif