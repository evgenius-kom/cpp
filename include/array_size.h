#include <cstddef> // size_t

// calculates the number of elements in a C-style array at compile time
template <typename T, size_t N>
constexpr size_t size(const T (&arr)[N]) noexcept
{
    return N;
}

// constexpr int a[]{ 5, 4, 3, 2, 1 };
// std::cout << size(a) << std::endl;

// https://en.cppreference.com/w/cpp/iterator/size
// another possible implementation of std::size() in STL
// template<class C>
// constexpr auto size(const C& c) -> decltype(c.size())
// {
//     return c.size();
// }
