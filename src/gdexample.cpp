#include "gdexample.h"
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void GDExample::_bind_methods() {
    ClassDB::bind_method(D_METHOD("set_test", "noise"), &GDExample::set_test);
    ClassDB::bind_method(D_METHOD("get_test"), &GDExample::get_test);
    ClassDB::add_property("GDExample", PropertyInfo(Variant::OBJECT, "test"), "set_test", "get_test");
}

GDExample::GDExample() {
	test = new FastNoiseLite();
    // also tried memnew(FastNoiseLite)
}

GDExample::~GDExample() {
	// Add your cleanup here.
    // memfree(test)??
}