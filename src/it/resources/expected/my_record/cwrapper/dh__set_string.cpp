// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from my_record.djinni

#include <iostream> // for debugging
#include <cassert>
#include "djinni/cwrapper/wrapper_marshal.hpp"
#include "../cpp-headers/my_record.hpp"

#include "dh__map_string_int32_t.hpp"
#include "dh__my_record.hpp"
#include "dh__set_string.hpp"

static void(*s_py_callback_set_string___delete)(DjinniObjectHandle *);
void set_string_add_callback___delete(void(* ptr)(DjinniObjectHandle *)) {
    s_py_callback_set_string___delete = ptr;
}

void set_string___delete(DjinniObjectHandle * drh) {
    s_py_callback_set_string___delete(drh);
}
void optional_set_string___delete(DjinniOptionalObjectHandle *  drh) {
    s_py_callback_set_string___delete((DjinniObjectHandle *) drh);
}
static size_t ( * s_py_callback_set_string__get_size)(DjinniObjectHandle *);

void set_string_add_callback__get_size(size_t( * ptr)(DjinniObjectHandle *)) {
    s_py_callback_set_string__get_size = ptr;
}

static DjinniObjectHandle * ( * s_py_callback_set_string__python_create)(void);

void set_string_add_callback__python_create(DjinniObjectHandle *( * ptr)(void)) {
    s_py_callback_set_string__python_create = ptr;
}

static void ( * s_py_callback_set_string__python_add)(DjinniObjectHandle *, DjinniString *);

void set_string_add_callback__python_add(void( * ptr)(DjinniObjectHandle *, DjinniString *)) {
    s_py_callback_set_string__python_add = ptr;
}

static DjinniString * ( * s_py_callback_set_string__python_next)(DjinniObjectHandle *);

void set_string_add_callback__python_next(DjinniString *( * ptr)(DjinniObjectHandle *)) {
    s_py_callback_set_string__python_next = ptr;
}

djinni::Handle<DjinniObjectHandle> DjinniSetString::fromCpp(const std::unordered_set<std::string> & dc) {
    djinni::Handle<DjinniObjectHandle> _handle(s_py_callback_set_string__python_create(), & set_string___delete);
    for (const auto & it : dc) {
        auto _key_val = DjinniString::fromCpp(it);
        s_py_callback_set_string__python_add(_handle.get(), _key_val.release());
    }

    return _handle;
}

std::unordered_set<std::string> DjinniSetString::toCpp(djinni::Handle<DjinniObjectHandle> dh) {
    std::unordered_set<std::string>_ret;
    size_t size = s_py_callback_set_string__get_size(dh.get());

    for (int i = 0; i < size; i++) {
        auto _el = DjinniString::toCpp(std::unique_ptr<DjinniString>(s_py_callback_set_string__python_next(dh.get())));
        _ret.insert(std::move(_el));
    }

    return _ret;
}

djinni::Handle<DjinniOptionalObjectHandle> DjinniSetString::fromCpp(std::optional<std::unordered_set<std::string>> dc) {
    if (!dc) {
        return nullptr;
    }
    return djinni::optionals::toOptionalHandle(DjinniSetString::fromCpp(std::move(* dc)), optional_set_string___delete);
}

std::optional<std::unordered_set<std::string>>DjinniSetString::toCpp(djinni::Handle<DjinniOptionalObjectHandle> dh) {
     if (dh) {
        return std::optional<std::unordered_set<std::string>>(DjinniSetString::toCpp(djinni::optionals::fromOptionalHandle(std::move(dh), set_string___delete)));
    }
    return {};
}
