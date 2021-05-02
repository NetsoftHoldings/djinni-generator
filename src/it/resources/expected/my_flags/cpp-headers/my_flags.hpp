// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from my_flags.djinni

#pragma once

#include <functional>

enum class MyFlags : unsigned {
    NO_FLAGS = 0,
    FLAG1 = 1 << 0,
    FLAG2 = 1 << 1,
    FLAG3 = 1 << 2,
    ALL_FLAGS = 0 | FLAG1 | FLAG2 | FLAG3,
};
constexpr MyFlags operator|(MyFlags lhs, MyFlags rhs) noexcept {
    return static_cast<MyFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs));
}
inline MyFlags& operator|=(MyFlags& lhs, MyFlags rhs) noexcept {
    return lhs = lhs | rhs;
}
constexpr MyFlags operator&(MyFlags lhs, MyFlags rhs) noexcept {
    return static_cast<MyFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs));
}
inline MyFlags& operator&=(MyFlags& lhs, MyFlags rhs) noexcept {
    return lhs = lhs & rhs;
}
constexpr MyFlags operator^(MyFlags lhs, MyFlags rhs) noexcept {
    return static_cast<MyFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs));
}
inline MyFlags& operator^=(MyFlags& lhs, MyFlags rhs) noexcept {
    return lhs = lhs ^ rhs;
}
constexpr MyFlags operator~(MyFlags x) noexcept {
    return static_cast<MyFlags>(~static_cast<unsigned>(x));
}

namespace std {

template <>
struct hash<::MyFlags> {
    size_t operator()(::MyFlags type) const {
        return std::hash<unsigned>()(static_cast<unsigned>(type));
    }
};

}  // namespace std