
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma clang diagnostic ignored "-Wsign-conversion"
#pragma clang diagnostic ignored "-Winconsistent-missing-destructor-override"
#pragma clang diagnostic ignored "-Wfloat-conversion"
#pragma clang diagnostic ignored "-Wshadow-field-in-constructor"

#include "jcf_debug.h"


namespace jcf {
    
using namespace juce;
    
#include "source/value_tree_debugger.cpp"
#include "source/buffer_debugger.cpp"
#include "source/component_debugger.cpp"
#include "source/font_and_colour_designer.cpp"

}

#pragma clang diagnostic pop
